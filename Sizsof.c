#include <stdio.h>

int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));
	printf("%d\n", s);
	return 0;
}