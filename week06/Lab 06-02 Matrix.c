#include <stdio.h>
  
int main() {
    double matrixA[3][3];
    double matrixB[3][3];
    double resultMatrix[3][3];
  
    // Input for Matrix A
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &matrixA[i][0], &matrixA[i][1], &matrixA[i][2]);
    }
  
    // Input for Matrix B
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &matrixB[i][0], &matrixB[i][1], &matrixB[i][2]);
    }
  
    // Calculate the product of matrices A and B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = 0.0;
            for (int k = 0; k < 3; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
  
    // Print the resulting matrix
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", resultMatrix[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}