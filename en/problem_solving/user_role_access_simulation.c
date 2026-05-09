#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char username[20];
    char role[10];
    bool active;
} User;

bool hasAccess(const User *u, const char *requestedAction)
{
    if (u == NULL || !u->active)
        return false;

    if (strcmp(u->role, "admin") == 0)
        return true;

    if (strcmp(u->role, "editor") == 0 && strcmp(requestedAction, "write") == 0)
        return true;

    if (strcmp(u->role, "viewer") == 0 && strcmp(requestedAction, "read") == 0)
        return true;

    return false;
}

int main(void)
{
    User u1 = {"ayse", "admin", true};
    User u2 = {"mehmet", "viewer", true};

    printf("%s write: %s\n", u1.username, hasAccess(&u1, "write") ? "allowed" : "denied");
    printf("%s write: %s\n", u2.username, hasAccess(&u2, "write") ? "allowed" : "denied");
    printf("%s read: %s\n", u2.username, hasAccess(&u2, "read") ? "allowed" : "denied");

    return 0;
}
