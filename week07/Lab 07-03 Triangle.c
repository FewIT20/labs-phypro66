#include <stdio.h>
#include <math.h>
 
double perimeter(double a, double b, double c) {
    return a + b + c;
}
 
double semi_perimeter(double a, double b, double c) {
    return (a + b + c) / 2;
}
 
double area(double a, double b, double c) {
    double s = semi_perimeter(a, b, c);
    return sqrt(s * ((s - a) * (s - b) * (s - c)));
}
 
int main() {
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = sqrt(pow(b, 2) + (pow(a, 2)));
    printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    printf("Area: %.2lf", area(a, b, c));
    return 0;
}