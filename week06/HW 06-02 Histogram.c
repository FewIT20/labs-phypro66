#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int number;
    char text[1000], freq[1000];
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf(" %c", &text[i]);
        text[i] = tolower(text[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < number; i++)
    {
        int count = 1;
        for (int j = i + 1; j < number; j++)
        {
            if (text[i] == text[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for (int i = 0; i < number; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c: %d\n", text[i], freq[i]);
        }
    }
    return 0;
}