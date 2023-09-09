#include <stdio.h>
#include <string.h>
int main()
{
    char text[101];
    int check = 1;
    int count = 0;
    scanf("%s", text);
    for (int i = strlen(text); i >= 0; i--)
    {
        if (text[count] == text[i - 1])
        {
            count++;
        }
        else
        {
            check = 0;
        }
    }
    if (check == 0) {
        printf("It is not Palindrome.");
    } else {
        printf("It is Palindrome.");
    }
    return 0;
}