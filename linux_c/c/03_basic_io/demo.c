#include <stdio.h>

int main(void)
{
	char str[5];
	char *return_string;
	printf("Enter a string: ");
	return_string = fgets(str, 5, stdin);
	if (return_string == NULL) {
		printf("Error: fgets() failed\n");
		return -1;
	} else {
		printf("You entered: %s\n", str);
	}

	return 0;
}