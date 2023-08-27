#include <stdio.h>
#include <ctype.h>

int main() {
    char array[10001];
    scanf(" %[^\n]", &array);

    int all_upper = 1;
    int all_lower = 1;

    for (int i = 0; array[i] != '\0'; i++) {
        if (islower(array[i])) {
            all_upper = 0;
        } else if (isupper(array[i])) {
            all_lower = 0;
        }
    }

    if (all_upper) {
        printf("All Capital Letter\n");
    } else if (all_lower) {
        printf("All Small Letter\n");
    } else {
        printf("Mix\n");
    }

    return 0;
}
