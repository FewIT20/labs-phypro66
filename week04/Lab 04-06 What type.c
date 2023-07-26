#include <stdio.h>
#include <ctype.h>
 
int main() {
    char val;
    scanf("%c", &val);
    if (isdigit(val)) {
        printf("number");
    } else if (isupper(val)) {
        printf("uppercase");
    } else if (islower(val)) {
        printf("lowercase");
    } else {
        printf("error");
    }
    return 0;
}