#include <stdio.h>
#include <string.h>
int main()
{
    int letter=0, word=0, line=0;
    int number=0;
    char text[450], out[100][100];
    while(1)
    {
        scanf(" %[^\n]s", &text);
        if(text[0] == '.')
            break;
        else
        {
            line++;
            for(int i=0; i<strlen(text); i++)
            {
                if(text[i] != ' ')
                {
                    letter++;
                    out[word][number] = text[i];
                    number++;
                }
                else
                {
                    word++;
                    number = 0;
                }
            }
        }
    }
    printf("Char = %d, word = %d, line = %d", letter, word+line, line);
    return 0;
}