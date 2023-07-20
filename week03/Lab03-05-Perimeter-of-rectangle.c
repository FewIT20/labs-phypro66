#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
 
    printf("Perimeter of rectangle = %.4lf units", 2 * (x + y));
    return 0;
}