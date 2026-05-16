#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define FILE_NAME "library_records.txt"

typedef struct
{
    int id;
    char title[50];
    char author[50];
    bool borrowed;
} Book;

void save_books(const Book books[], int count)
{
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL)
        return;

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d|%s|%s|%d\n",
                books[i].id,
                books[i].title,
                books[i].author,
                books[i].borrowed ? 1 : 0);
    }
    fclose(fp);
}

void load_books(Book books[], int *count)
{
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
        return;

    while (*count < MAX_BOOKS)
    {
        Book book;
        int borrowed;
        if (fscanf(fp, "%d|%49[^|]|%49[^|]|%d\n",
                   &book.id,
                   book.title,
                   book.author,
                   &borrowed) != 4)
        {
            break;
        }
        book.borrowed = borrowed == 1;
        books[*count] = book;
        (*count)++;
    }
    fclose(fp);
}

int main(void)
{
    Book books[MAX_BOOKS];
    int count = 0;

    load_books(books, &count);

    if (count < MAX_BOOKS)
    {
        books[count].id = count + 1;
        strcpy(books[count].title, "C Programming");
        strcpy(books[count].author, "Anonymous");
        books[count].borrowed = false;
        count++;
    }

    save_books(books, count);
    printf("Record count: %d\n", count);
    return 0;
}
