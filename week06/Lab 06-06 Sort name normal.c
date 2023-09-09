#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void capitalizeName(char name[]) {
    int length = strlen(name);
    int capitalizeNext = 1; // Start by capitalizing the first character
 
    for (int i = 0; i < length; i++) {
        if (isalpha(name[i])) {
            if (capitalizeNext) {
                name[i] = toupper(name[i]);
                capitalizeNext = 0;
            } else {
                name[i] = tolower(name[i]);
            }
        } else {
            capitalizeNext = 1;
        }
    }
}
 
int main() {
    char names[20][100]; // Array to store names (each up to 60 characters + null terminator)
    
    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]", names[i]);
    }
     
    // Sort names
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[61];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
     
    for (int i = 0; i < 20; i++) {
        capitalizeName(names[i]);
        printf("%s\n", names[i]);
    }
     
    return 0;
}