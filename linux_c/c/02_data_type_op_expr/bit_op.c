#include <stdio.h>

int main(void)
{
	int a = -128;
	printf("%d\n", a);

	a = a >> 1;
	printf("%d\n", a);

	return 0;
}