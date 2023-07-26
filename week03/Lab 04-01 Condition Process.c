#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == y) {
        printf("%d + %d = %d", x, y, (x+y));
    } else {
        printf("%d - %d = %d", x, y, (x-y));
    }
    return 0;
}