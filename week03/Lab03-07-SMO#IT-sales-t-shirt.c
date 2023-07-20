#include <stdio.h>
int main()
{
    double x, y, z;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
     
    double result = (x - (x * (y/100))) * z;
    printf("%.2lf", result);
    return 0;
}