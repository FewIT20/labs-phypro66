#include <stdio.h>
#include <math.h>
 
int main()
{
    float x1 = 0;
    float x2 = 0;
     
    scanf("%f", &x1);
    scanf("%f", &x2);
 
    float result = sqrt(pow(x1, 2) + pow(x2, 2));
    printf("%.2f", result);
    return 0;
}