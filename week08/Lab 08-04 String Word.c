#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
    char text[151];
    scanf(" %[^\n]", text);
 
    int wordCount = 0;
    int wordLength = 0;
 
    for (int i = 0; i <= strlen(text); i++) {
        if (isalnum(text[i])) { 
            wordLength++;
        } else if (wordLength > 0) {
            wordCount++;
            wordLength = 0;
        }
    }
 
    for (int i = 0; i < strlen(text); i++) {
        text[i] = tolower(text[i]);
    }
 
    printf("%d words\n", wordCount);
    printf("----\n");
    wordLength = 0;
 
    for (int i = 0; i <= strlen(text); i++) {
        if (isalnum(text[i])) { 
            wordLength++;
        } else if (wordLength > 0) {
            printf("%.*s : %d\n", wordLength, &text[i - wordLength], wordLength);
            wordLength = 0;
        }
    }
 
    return 0;
}