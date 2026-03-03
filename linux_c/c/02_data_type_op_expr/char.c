#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char: %u to %u\n", 0, UCHAR_MAX);

	return 0;
}