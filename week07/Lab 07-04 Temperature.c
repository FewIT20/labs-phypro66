#include <stdio.h>
#include <ctype.h>
 
double celsiusToFahrenheit(double celcius) {
    double result = 32 + celcius * (180.0/100.0);
    printf("%.2lf f", result);
}
 
double fahrenheitToCelcius(double fahrenheit) {
    double result = (fahrenheit - 32) * 5/9;
    printf("%.2lf c", result);
}  
 
int main() {
    char changeTo;
    double temp;
    scanf("%lf %c", &temp, &changeTo);
    changeTo = tolower(changeTo);
    if (changeTo == 'c') {
        celsiusToFahrenheit(temp);
    } else if (changeTo == 'f') {
        fahrenheitToCelcius(temp);
    }
    return 0;
}