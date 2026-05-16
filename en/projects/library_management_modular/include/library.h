#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdbool.h>
#include <stddef.h>

#define LIBRARY_MAX_BOOKS 100
#define LIBRARY_TITLE_LENGTH 64
#define LIBRARY_AUTHOR_LENGTH 64

typedef struct
{
    int id;
    char title[LIBRARY_TITLE_LENGTH];
    char author[LIBRARY_AUTHOR_LENGTH];
    bool borrowed;
} Book;

typedef struct
{
    Book books[LIBRARY_MAX_BOOKS];
    size_t count;
} Library;

void library_init(Library *library);
bool library_add_book(Library *library, const char *title, const char *author);
const Book *library_find_by_id(const Library *library, int id);
bool library_borrow_book(Library *library, int id);
bool library_return_book(Library *library, int id);
size_t library_count_available(const Library *library);

#endif
