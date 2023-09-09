#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
 
char swapcase(char text[]) {
    for(int i=0; i<strlen(text); i++) {
        if (islower(text[i])) {
            printf("%c",toupper(text[i]));
        } else {
            printf("%c",tolower(text[i]));
        }
    }
    printf("\n");
}

int main() {
    bool matched = true;
    char text1[101], text2[101];
    scanf(" %[^\n]", &text1);
    scanf(" %[^\n]", &text2);
    if (strlen(text1) != strlen(text2)) {
        matched = false;
    }
    for (int i = 0; i < strlen(text1); i++) {
        if (!matched) break;
        if (tolower(text1[i]) != tolower(text2[i])) {
            matched = false;
        }
    }
    printf("*** Results ***\n");
    swapcase(text1);
    swapcase(text2);
    printf("***************\n");
    if (matched) {
        printf("Both strings are the same.\n");
    } else {
        printf("Both strings are not the same.\n");
    }
}