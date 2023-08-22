#include <stdio.h>
#include <stdbool.h>
 
int main() {
    float matrix[3][3];
    int isScalarMatrix = true;
    float scalarValue;
 
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
        if (i == 0) {
            scalarValue = matrix[i][0];
            if (scalarValue == 0.0) {
                isScalarMatrix = false;
            }
        } else {
            for (int j = 0; j < 3; j++) {
                if (i == j) {
                    if (matrix[i][j] != scalarValue) {
                        isScalarMatrix = false;
                        break;
                    }
                } else {
                    if (matrix[i][j] != 0.0) {
                        isScalarMatrix = false;
                        break;
                    }
                }
            }
        }
    }
 
    if (isScalarMatrix) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
 
    return 0;
}