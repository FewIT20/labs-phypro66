#include <stdio.h>
#include <math.h>
 
int main()
{
    double x, y, z;
    double PI = 3.14159265359;
 
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
 
    printf("Volume : %.2fml\n", z * PI * (y / 2) * (y / 2));
    printf("Baht/ml : %.4f", x/(z * PI * (y / 2) * (y / 2)));
    return 0;
}