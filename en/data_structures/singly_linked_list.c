/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/data_structures/doubly_linked_list.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int id;
    char name[32];
    struct Node *next;
} Node;

static Node *create_node(int id, const char *name) {
    Node *node = malloc(sizeof(*node));
    if (node == NULL) {
        return NULL;
    }

    node->id = id;
    snprintf(node->name, sizeof(node->name), "%s", name);
    node->next = NULL;
    return node;
}

static int push_front(Node **head, int id, const char *name) {
    Node *node = create_node(id, name);
    if (node == NULL) {
        return 0;
    }

    node->next = *head;
    *head = node;
    return 1;
}

static Node *find_by_id(Node *head, int id) {
    for (Node *current = head; current != NULL; current = current->next) {
        if (current->id == id) {
            return current;
        }
    }

    return NULL;
}

static int remove_by_id(Node **head, int id) {
    Node *current = *head;
    Node *previous = NULL;

    while (current != NULL) {
        if (current->id == id) {
            if (previous == NULL) {
                *head = current->next;
            } else {
                previous->next = current->next;
            }

            free(current);
            return 1;
        }

        previous = current;
        current = current->next;
    }

    return 0;
}

static void print_list(const Node *head) {
    for (const Node *current = head; current != NULL; current = current->next) {
        printf("%d -> %s\n", current->id, current->name);
    }
}

static void destroy_list(Node **head) {
    Node *current = *head;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

int main(void) {
    Node *students = NULL;

    if (!push_front(&students, 3, "Grace") ||
        !push_front(&students, 2, "Bjarne") ||
        !push_front(&students, 1, "Ada")) {
        destroy_list(&students);
        return 1;
    }

    print_list(students);

    Node *found = find_by_id(students, 2);
    if (found != NULL) {
        printf("found: %s\n", found->name);
    }

    remove_by_id(&students, 1);
    puts("after removal:");
    print_list(students);

    destroy_list(&students);
    return 0;
}
