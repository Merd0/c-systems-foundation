/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 */

#include "library.h"

#include <stdio.h>
#include <string.h>

static Book *library_find_mutable_by_id(Library *library, int id)
{
    if (library == NULL)
        return NULL;

    for (size_t i = 0; i < library->count; i++)
    {
        if (library->books[i].id == id)
            return &library->books[i];
    }

    return NULL;
}

void library_init(Library *library)
{
    if (library == NULL)
        return;

    library->count = 0;
}

bool library_add_book(Library *library, const char *title, const char *author)
{
    if (library == NULL || title == NULL || author == NULL)
        return false;

    if (library->count >= LIBRARY_MAX_BOOKS)
        return false;

    Book *book = &library->books[library->count];
    book->id = (int)library->count + 1;
    snprintf(book->title, sizeof(book->title), "%s", title);
    snprintf(book->author, sizeof(book->author), "%s", author);
    book->borrowed = false;

    library->count++;
    return true;
}

const Book *library_find_by_id(const Library *library, int id)
{
    if (library == NULL)
        return NULL;

    for (size_t i = 0; i < library->count; i++)
    {
        if (library->books[i].id == id)
            return &library->books[i];
    }

    return NULL;
}

bool library_borrow_book(Library *library, int id)
{
    Book *book = library_find_mutable_by_id(library, id);
    if (book == NULL || book->borrowed)
        return false;

    book->borrowed = true;
    return true;
}

bool library_return_book(Library *library, int id)
{
    Book *book = library_find_mutable_by_id(library, id);
    if (book == NULL || !book->borrowed)
        return false;

    book->borrowed = false;
    return true;
}

size_t library_count_available(const Library *library)
{
    if (library == NULL)
        return 0;

    size_t available = 0;
    for (size_t i = 0; i < library->count; i++)
    {
        if (!library->books[i].borrowed)
            available++;
    }

    return available;
}
