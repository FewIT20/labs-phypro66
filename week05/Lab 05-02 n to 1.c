#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = count; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}