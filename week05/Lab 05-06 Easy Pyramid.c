#include <stdio.h>
int main()
{
    int i, space, rows, k = 0;
     
    // taking input for number of rows
    scanf("%d", &rows);
     
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            // Printing spaces
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            // Printing stars
            printf("*");
            ++k;
        }
        // Ending line after each row
        printf("\n");
    }
    return 0;
}