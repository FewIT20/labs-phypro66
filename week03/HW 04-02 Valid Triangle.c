#include <stdio.h>
 
int isTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1; // Valid triangle
    } else {
        return 0; // Not a valid triangle
    }
}
 
int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (isTriangle(x, y, z)) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }
    return 0;
}