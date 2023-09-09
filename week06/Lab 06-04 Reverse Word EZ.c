#include <stdio.h>
#include <string.h>
 
void reverseSentence(char sentence[], int length) {
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", sentence[i]);
    }
}
 
int main() {
    char sentence[100];
    scanf(" %[^\n]s", sentence);
    int length = strlen(sentence);
    reverseSentence(sentence, length);
    return 0;
}