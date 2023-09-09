#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char text[301], check;
    int i, count = 0, pos;
    scanf("%[^\n]s", &text);
    scanf(" %c", &check);
    for (i = 0; i < strlen(text); i++)
    {
        if (tolower(text[i]) == check || toupper(text[i]) == check)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Not found.");
    }
    else
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, check);
        printf("Position:");
        for (i = 0; i < strlen(text); i++)
        {
            if (tolower(text[i]) == tolower(check))
            {
                if (pos < count - 1)
                {
                    pos++;
                    printf(" %d,", i + 1);
                }
                else
                {
                    printf(" %d", i + 1);
                }
            }
        }
    }
    return 0;
}