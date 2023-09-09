#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool found = false;
    int search = 0;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    while (!found) {
        scanf("%d", &search);
        if (search >= 1 && search <= 20) {
            found = true;
        }
    }
    bool search_found = false;
    for (int i = 0; i < sizeof(M)/sizeof(M[0]); i++) {
        if (!search_found && M[i] == search) {
            printf("%d is in M at index [%d]", search, i);
            search_found = true;
        }
    }
    for (int i = 0; i < sizeof(N)/sizeof(N[0]); i++) {
        if (!search_found && N[i] == search) {
            printf("%d is in N at index [%d]", search, i);
            search_found = true;
        }
    }
    if (!search_found) {
        printf("%d is not in neither M nor N", search);
    }
    return 0;
}