#include <stdio.h>
int main()
{
    int number, first, second;
    scanf("%d", &number);
    first = number % 1000;
    second = (number - first) / 1000;
    printf("%d%d", first, second);
    return 0;
}
