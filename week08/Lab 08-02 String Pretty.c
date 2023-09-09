#include <stdio.h>
#include <string.h>
void printStar(int number)
{
    for(int i=0; i<number; i++)
        printf("*");
    printf("\n");
}
void word(int inside, char text[])
{
    int space, left, right;
    space = inside - strlen(text);
    left = space / 2;
    right = space / 2;
    if(space % 2 != 0)
        left++;
    printf("*");
    for(int i=0; i<left; i++)
        printf(" ");
    printf("%s", text);
    for(int i=0; i<right; i++)
        printf(" ");
    printf("*\n");
}
int main()
{
    int number;
    char text1[51];
    char text2[41];
    scanf("%d", &number);
    int inside=number-2;
    scanf(" %[^\n]s", &text1);
    scanf(" %[^\n]s", &text2);
    printStar(number);
    word(inside, text1);
    word(inside, text2);
    printStar(number);
    return 0;
}