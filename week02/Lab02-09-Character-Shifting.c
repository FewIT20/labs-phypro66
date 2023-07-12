#include <stdio.h>
int main()
{
	char one, two, three, four, five;
	scanf(" %c", &one);
	scanf(" %c", &two);
	scanf(" %c", &three);
	scanf(" %c", &four);
	scanf(" %c", &five);

	one++;
	three++;
	five++;

	printf("%c\n", one);
	printf("%c\n", two);
	printf("%c\n", three);
	printf("%c\n", four);
	printf("%c", five);
	return 0;
}
