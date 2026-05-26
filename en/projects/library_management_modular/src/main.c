/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 */

#include "library.h"

#include <stdio.h>

static void print_book(const Book *book)
{
    if (book == NULL)
        return;

    printf("[%d] %s - %s (%s)\n",
           book->id,
           book->title,
           book->author,
           book->borrowed ? "borrowed" : "available");
}

int main(void)
{
    Library library;
    library_init(&library);

    library_add_book(&library, "The C Programming Language", "Kernighan and Ritchie");
    library_add_book(&library, "Clean Code", "Robert C. Martin");

    library_borrow_book(&library, 1);

    for (size_t i = 0; i < library.count; i++)
        print_book(&library.books[i]);

    printf("Available books: %zu\n", library_count_available(&library));
    return 0;
}
