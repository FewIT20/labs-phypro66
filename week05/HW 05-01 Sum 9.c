#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool stop = false;
    int total_sum = 0;
    int number;
    while (!stop)
    {
        scanf("%d", &number);
        if (number==-9) {
            stop=true;
        } else {
            total_sum += number;
        }
    }
    printf("%d", total_sum);
    return 0;
}