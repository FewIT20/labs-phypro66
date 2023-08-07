#include <stdio.h>
 
int main()
{
    float x1 = 0;
    float x2 = 0;
    float x3 = 0;
    float x4 = 0;
 
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);
    scanf("%f", &x4);
 
    float result_sum = x1 + x2 + x3 + x4;
    printf("Summation is %.2f\n", result_sum);
    printf("Average is %.3f", (result_sum)/4);
    return 0;
}