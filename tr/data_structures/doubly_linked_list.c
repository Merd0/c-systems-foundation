#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *previous;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} List;

static Node *create_node(int value) {
    Node *node = malloc(sizeof(*node));
    if (node == NULL) {
        return NULL;
    }

    node->value = value;
    node->previous = NULL;
    node->next = NULL;
    return node;
}

static int push_back(List *list, int value) {
    Node *node = create_node(value);
    if (node == NULL) {
        return 0;
    }

    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return 1;
    }

    node->previous = list->tail;
    list->tail->next = node;
    list->tail = node;
    return 1;
}

static int pop_back(List *list, int *out_value) {
    if (list->tail == NULL) {
        return 0;
    }

    Node *old_tail = list->tail;
    *out_value = old_tail->value;
    list->tail = old_tail->previous;

    if (list->tail == NULL) {
        list->head = NULL;
    } else {
        list->tail->next = NULL;
    }

    free(old_tail);
    return 1;
}

static void print_forward(const List *list) {
    for (const Node *node = list->head; node != NULL; node = node->next) {
        printf("%d ", node->value);
    }
    putchar('\n');
}

static void print_backward(const List *list) {
    for (const Node *node = list->tail; node != NULL; node = node->previous) {
        printf("%d ", node->value);
    }
    putchar('\n');
}

static void destroy_list(List *list) {
    Node *node = list->head;
    while (node != NULL) {
        Node *next = node->next;
        free(node);
        node = next;
    }

    list->head = NULL;
    list->tail = NULL;
}

int main(void) {
    List numbers = {0};

    if (!push_back(&numbers, 10) ||
        !push_back(&numbers, 20) ||
        !push_back(&numbers, 30)) {
        destroy_list(&numbers);
        return 1;
    }

    print_forward(&numbers);
    print_backward(&numbers);

    int removed = 0;
    if (pop_back(&numbers, &removed)) {
        printf("silinen: %d\n", removed);
    }

    destroy_list(&numbers);
    return 0;
}
