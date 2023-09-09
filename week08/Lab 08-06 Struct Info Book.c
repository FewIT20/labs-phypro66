#include <stdio.h>
#include <string.h>
int main()
{
    struct student_info
    {
        char name[100];
        char surname[100];
        char sex[100];
        int age;
        char id[100];
        float grade;
    }who;
    scanf("%s %s %s %d %s %f", &who.name, &who.surname,&who.sex, &who.age, &who.id, &who.grade);
    if(!strcmp("Male", who.sex)) {
        printf("Mr %c %s (%d) ID: %s GPA %.2f", who.name[0], who.surname, who.age, who.id, who.grade);
    } else {
        printf("Miss %c %s (%d) ID: %s GPA %.2f", who.name[0], who.surname, who.age, who.id, who.grade);
    }
    return 0;
}