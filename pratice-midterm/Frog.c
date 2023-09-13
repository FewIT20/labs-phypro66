#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("2");
    } else {
        double total = (double) y/x;
        int result = ceil(total);
        printf("%d", result);
    }
    return 0;
}