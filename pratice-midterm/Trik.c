#include <stdio.h>

int main()
{
	char played[51];
	int a = 1, b = 0, c = 0;
	scanf(" %[^\n]s", &played);
	for (int i = 0; played[i] != '\0'; i++) {
		if (played[i] == 'A') {
			int temped = a;
			a = b;
			b = temped;
		} else if (played[i] == 'B') {
			int temped = b;
			b = c;
			c = temped;
		}  else if (played[i] == 'C') {
			int temped = c;
			c = a;
			a = temped;
		}
	}
	char value ;
	if (a == 1) {
		value = '1';
	} else if (b == 1) {
		value = '2';
	} else if (c == 1) {
		value = '3';
	}
	printf("%c", value);
	return 0;
}
