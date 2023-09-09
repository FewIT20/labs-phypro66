#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int counting = 0;
    char searching;
    char text[151];
    scanf(" %c", &searching);
    scanf(" %[^\n]", &text);
    for (int i = 0; i < strlen(text); i++) {
        if (tolower(text[i]) == tolower(searching)) {
            counting++;
        }
    }
    printf("%d", counting);
    return 0;
}