#include <stdio.h>
int main()
{
   char name[101];
   int age;

   scanf("%[^\n]s", &name);
   scanf(" %d", &age);
   printf("Hello world, my name is %s, I'm %d years old.", name, age);
   return 0;
}