#include <stdio.h>
 
double findMiddle(double a, double b, double c) {
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        return a;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        return b;
    } else {
        return c;
    }
} 
 
int main()
{
    double x1, x2, x3;
    scanf("%lf %lf %lf", &x1, &x2, &x3);
     
    double middleVal = findMiddle(x1, x2, x3);
    printf("%.2lf", middleVal);
    return 0;
}