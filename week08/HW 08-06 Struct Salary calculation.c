#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int count, index;
    char finder[10];
    bool found = false;
    scanf("%d", &count);
    struct Record records[count];
    for (int i = 0; i < count; i++) {
        scanf("%s %s %ld %ld", &records[i].id, &records[i].name, &records[i].salary, &records[i].sales);
    }
    scanf(" %[^\n]s", &finder);
    for (int i = 0; i < count; i++) {
        if (strcmp(records[i].id, finder) == 0) {
            found = true;
            index = i;
            break;
        }
    }
    if (!found) {
        printf("ID not found !!!");
    } else {
        float commission = records[index].sales * 0.02;
        printf("%s\n", records[index].id);
        printf("%s\n", records[index].name);
        printf("%ld\n", records[index].sales);
        printf("%.2lf\n", commission);
        printf("%ld\n", records[index].salary);
        printf("%.2lf", records[index].salary+commission);
    }
}