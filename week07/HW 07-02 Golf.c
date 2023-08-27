#include <stdio.h>
#include <math.h>

int main() {
    long double pi = 3.141592653589793;
    int dree, speed;
    double radius, high;
    scanf("%d", &dree);
    scanf("%d", &speed);
    radius = (dree * pi) / 180;
    high = (speed * speed * sin(radius) * sin(radius))/(2*9.81);
    printf("theta (degree) : %d\n", dree);
    printf("u (m/s) : %d\n", speed);
    printf("h (m) : %.4lf", high); 
    return 0;
}