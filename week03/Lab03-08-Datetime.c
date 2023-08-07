#include <stdio.h>
int main()
{
    int time;
    scanf("%d", &time);
    int seconds = (time %60);
    int minutes = (time % 3600) / 60;
    int hours = (time % 86400) / 3600;
    int days = (time % (86400 * 30)) / 86400;
    printf("%d s = %d d %d h %d m %d s", time, days, hours, minutes, seconds);
    return 0;
}