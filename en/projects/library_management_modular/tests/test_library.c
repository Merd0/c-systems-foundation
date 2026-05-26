#include "library.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

static void test_add_and_find_book(void)
{
    Library library;
    library_init(&library);

    assert(library_add_book(&library, "C Primer Plus", "Stephen Prata"));
    assert(library.count == 1);

    const Book *book = library_find_by_id(&library, 1);
    assert(book != NULL);
    assert(strcmp(book->title, "C Primer Plus") == 0);
    assert(!book->borrowed);
}

static void test_borrow_and_return_book(void)
{
    Library library;
    library_init(&library);

    assert(library_add_book(&library, "Systems Programming", "Anonymous"));
    assert(library_borrow_book(&library, 1));
    assert(!library_borrow_book(&library, 1));
    assert(library_count_available(&library) == 0);

    assert(library_return_book(&library, 1));
    assert(!library_return_book(&library, 1));
    assert(library_count_available(&library) == 1);
}

int main(void)
{
    test_add_and_find_book();
    test_borrow_and_return_book();

    puts("library tests passed");
    return 0;
}
