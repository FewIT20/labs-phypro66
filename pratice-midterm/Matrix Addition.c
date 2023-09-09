#include <stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr1[row][column], arr2[row][column];
    int i = 0;
    int j = 0;

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            int element;
            scanf("%d", &element);
            arr1[i][j] = element;
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            int element;
            scanf("%d", &element);
            arr2[i][j] = element;
        }
    }
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}