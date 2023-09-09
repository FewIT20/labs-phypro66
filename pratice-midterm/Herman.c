#include <stdio.h>
#include <math.h>
int main() {
    double radius;
    scanf("%d", &radius);
    printf("%.6lf\n", (M_PI*(radius*radius)));
    printf("%.6lf", (radius*radius)*2);
    return 0;
}