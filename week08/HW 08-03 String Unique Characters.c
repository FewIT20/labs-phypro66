#include <stdio.h>
#include <string.h>
  
int main () {
  
    char input[101];
    int flag = 1;
    scanf(" %s", input);
  
    int length = strlen(input);
  
    while (flag == 1) {
        flag = 0;
        for (int i = 0; i < length; i++) {
            // find the next char
            char current = input[i];
            int nextIndex = -1;
            for (int j = i + 1; j < length; j++) {
                if (input[j] == '#') {
                    continue;
                }
                nextIndex = j;
                break;
            }
            if (nextIndex != -1) {
                if (current == input[nextIndex]) {
                    flag = 1;
                    input[i] = '#';
                    input[nextIndex] = '#';
                }
            }
        }
        if (flag == 1) {
            for (int i = 0; i < length; i++) {
                if (input[i] != '#') {
                    printf("%c", input[i]);
                }
            }
            printf("\n");
        }    
    }
    return 0;
}