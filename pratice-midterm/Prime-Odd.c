#include <stdio.h>
#include <string.h>

int main() {
    int count;
    scanf("%d", &count);
    char array[count];
    for (int i = 0; i < count; i++)
    {
        char temped[1020];
        scanf("%s", temped);
        int len = strlen(temped); // 120 -> 3 -> 2
        int last_digit = temped[len - 1] - '0'; // '8' - '0' = 8
        if ((len == 1 && last_digit == 2) || last_digit % 2 != 0) {
            array[i] = 'T';
        } else {
            array[i] = 'F';
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%c\n", array[i]);
    }
    return 0;
}