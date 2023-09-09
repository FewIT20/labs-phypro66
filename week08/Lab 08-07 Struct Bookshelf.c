#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main() {
    int count;
    int index;
    bool found = false;
    char searching[10];
    
    scanf("%d", &count);
    struct Book books[count];
    scanf(" %[^\n]s", &searching);
    for (int i = 0; i < count; i++) {
        scanf("%s %s %s", &books[i].id, &books[i].name, &books[i].author);
    }
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].id, searching) == 0) {
            found = true;
            index = i;
        }
    }
    if (!found) {
        printf("Not Found");
    } else {
        printf("%s %s %s", books[index].id, books[index].name, books[index].author);
    }
    return 0;
}