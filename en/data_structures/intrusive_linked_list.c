/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/function_pointers/README.md
 */

#include <stddef.h>
#include <stdio.h>

#define container_of(pointer, type, member) \
    ((type *)((char *)(pointer) - offsetof(type, member)))

typedef struct ListNode {
    struct ListNode *next;
} ListNode;

typedef struct {
    int id;
    const char *name;
    ListNode link;
} Task;

static void push_front(ListNode **head, ListNode *node) {
    node->next = *head;
    *head = node;
}

static void print_tasks(const ListNode *head) {
    for (const ListNode *node = head; node != NULL; node = node->next) {
        const Task *task = container_of(node, Task, link);
        printf("%d -> %s\n", task->id, task->name);
    }
}

int main(void) {
    Task boot = {1, "boot", {NULL}};
    Task read_sensor = {2, "read sensor", {NULL}};
    Task transmit = {3, "transmit", {NULL}};

    ListNode *tasks = NULL;
    push_front(&tasks, &transmit.link);
    push_front(&tasks, &read_sensor.link);
    push_front(&tasks, &boot.link);

    print_tasks(tasks);
    return 0;
}
