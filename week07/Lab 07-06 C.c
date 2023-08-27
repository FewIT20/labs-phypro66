#include <stdio.h>
#include <math.h>
 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    double result = sqrt(pow(x, 2) + pow(y, 2));
    printf("sqrt(%d^2+%d^2)=%.2lf", x, y, result);
    return 0;
}