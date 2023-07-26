#include <stdio.h>
 
int main() {
    char input;
     
    scanf("%c", &input);
     
    if (input >= 'a' && input <= 'z') {
        input = input - 'a' + 'A';
    } else if (input >= 'A' && input <= 'Z') {
        input = input - 'A' + 'a';
    } else {
        printf("error\n");
        return 0;
    }
    printf("%c", input);
 
    return 0;
}