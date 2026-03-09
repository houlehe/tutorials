#include <stdio.h>

#define LEFT 0
#define RIGHT 100

int main(void)
{
    int i = LEFT;
    int sum = 0;

loop:
    sum += i;
    i++;

    if (i <= RIGHT)
        goto loop;

    printf("sum = %d\n", sum);

    return 0;
}