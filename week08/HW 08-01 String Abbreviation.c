#include <stdio.h>
int main()
{
    char firstname[200], surname[200];
    scanf("%s %s", firstname, surname);
    printf("%c.%c.", firstname[0], surname[0]);
    return 0;
}