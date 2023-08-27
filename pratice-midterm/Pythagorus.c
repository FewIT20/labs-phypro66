#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    double result = sqrt(x*x + y*y);
    printf("%.6lf", result);
    return 0;
}