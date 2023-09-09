#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char check[10];
    struct student_info
    {
        char name[100];
        char surname[100];
        char sex[100];
        int age;
        char id[100];
        float grade;
    } who[20], move;
    for(int i=0; i<20; i++)
        scanf("%s %s %s %d %s %f", &who[i].name, &who[i].surname,&who[i].sex, &who[i].age, &who[i].id, &who[i].grade);
    scanf("%s", &check);
    for(int i=0; i<strlen(check); i++)
        check[i] = tolower(check[i]);
    if(!strcmp(check, "name"))
    {
        for(int i=0; i<20; i++)
        {
            for(int j=i+1; j<20; j++)
            {
                if(strcmp((who[i].name),(who[j].name))>0)
                {
                    move = who[i];
                    who[i] = who[j];
                    who[j] = move;
                }
            }
        }
    }
    if(!strcmp(check, "surname"))
    {
        for(int i=0; i<20; i++)
        {
            for(int j=i+1; j<20; j++)
            {
                if(strcmp((who[i].surname),(who[j].surname))>0)
                {
                    move = who[i];
                    who[i] = who[j];
                    who[j] = move;
                }
            }
        }
    }
    if(!strcmp(check, "id"))
    {
        for(int i=0; i<20; i++)
        {
            for(int j=i+1; j<20; j++)
            {
                if(strcmp((who[i].id),(who[j].id))>0)
                {
                    move = who[i];
                    who[i] = who[j];
                    who[j] = move;
                }
            }
        }
    }
    for(int i=0; i<20; i++)
    {
        if(!strcmp("Male", who[i].sex))
            printf("Mr %c %s (%d) ID: %s GPA %.2f\n", who[i].name[0], who[i].surname, who[i].age, who[i].id, who[i].grade);
        else
            printf("Miss %c %s (%d) ID: %s GPA %.2f\n", who[i].name[0], who[i].surname, who[i].age, who[i].id, who[i].grade);
    }
    return 0;
}