#include<stdio.h>
#include<stdbool.h>
int main()
{
    int size, row, column;
 
    scanf("%d", &size);
 
    row = 0;
    while (row < size)
    {
        column = 0;
        while (column < size)
        {
            if (column == row || column == size - row - 1)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
            column++;
        }
        printf("\n");
        row++;
    }
    return 0;
}