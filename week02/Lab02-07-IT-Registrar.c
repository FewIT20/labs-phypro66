#include <stdio.h>
#include <string.h>

int main()
{
	char firstname[30];
	char lastname[30];
	int std_id;
    int day, month, year;
	float gpa;
	scanf("%s", &firstname);
	scanf("%s", &lastname);
	scanf("%d", &std_id);
    scanf("%d/%d/%d", &day, &month, &year);
	scanf("%f", &gpa);
	printf("Fullname: %s %s\n", firstname, lastname);
	printf("ID: %d\n", std_id);
    printf("DOB: %02d-%02d-%02d\n",day, month, year);
	printf("GPA: %.2f", gpa);
	return 0;
}
