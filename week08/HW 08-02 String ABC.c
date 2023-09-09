#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int compare(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}
 
int main() {
    char input_text[200];
    scanf(" %[^\n]", &input_text);
    size_t len = strlen(input_text);
    qsort(input_text, len, sizeof(char), compare);
    printf("%s\n", input_text);
    return 0;
}