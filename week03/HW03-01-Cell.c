#include <stdio.h>
int main()
{
    char text[3];
    scanf("%[^\n]s", &text);
    
    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", text);
    printf("*-*-*\n");
    printf("*****");
    return 0;
}