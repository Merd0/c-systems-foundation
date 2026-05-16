#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    int id;
    char title[50];
    char author[50];
    bool borrowed;
} Book;

void add_book(Book books[], int *count)
{
    if (*count >= MAX_BOOKS)
        return;

    Book *book = &books[*count];
    book->id = *count + 1;

    printf("Book title: ");
    if (scanf(" %49[^\n]", book->title) != 1)
        return;

    printf("Author: ");
    if (scanf(" %49[^\n]", book->author) != 1)
        return;

    book->borrowed = false;
    (*count)++;
}

void list_books(const Book books[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("[%d] %s - %s (%s)\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].borrowed ? "Borrowed" : "Available");
    }
}

int find_book(const Book books[], int count, const char *query)
{
    for (int i = 0; i < count; i++)
        if (strstr(books[i].title, query) != NULL)
            return i;
    return -1;
}

int main(void)
{
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char query[50];

    while (1)
    {
        printf("\n1-Add 2-List 3-Search 4-Borrow 5-Return 0-Exit\nChoice: ");
        if (scanf("%d", &choice) != 1)
            return 1;

        if (choice == 0)
            break;
        if (choice == 1)
            add_book(books, &count);
        else if (choice == 2)
            list_books(books, count);
        else if (choice == 3)
        {
            printf("Search title: ");
            if (scanf(" %49[^\n]", query) != 1)
                return 1;
            int index = find_book(books, count, query);
            printf(index >= 0 ? "Found: %s\n" : "Not found\n", index >= 0 ? books[index].title : "");
        }
        else if (choice == 4)
        {
            int id;
            printf("Borrow id: ");
            if (scanf("%d", &id) == 1 && id > 0 && id <= count)
                books[id - 1].borrowed = true;
        }
        else if (choice == 5)
        {
            int id;
            printf("Return id: ");
            if (scanf("%d", &id) == 1 && id > 0 && id <= count)
                books[id - 1].borrowed = false;
        }
    }
    return 0;
}
