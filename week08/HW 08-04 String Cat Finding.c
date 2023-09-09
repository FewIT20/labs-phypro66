#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char varchar[2001];
    int found_at_index[2001], count = 0;
    scanf(" %[^\n]s", &varchar);
    for (int i = 0; i < strlen(varchar); i++) {
        varchar[i] = tolower(varchar[i]);
    }
    for (int i = 0; varchar[i+2] != '\0'; i++){
        if (varchar[i] == 'c' && varchar[i + 1] == 'a' && varchar[i + 2] == 't') {
            found_at_index[count] = i;
            count++;
            i += 2;
        }
    }
    for (int i = 0; i < count; i++) {
        if (i + 1 == count) {
            printf("%d", found_at_index[i]);
        } else {
            printf("%d, ", found_at_index[i]);
        }
    }
    return 0;
}