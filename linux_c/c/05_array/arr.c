#include <stdio.h>

int main(void)
{
    int arr[3];

    printf("array size = %zu\n", sizeof(arr));

    for(int i = 0; i < 3; i++)
        printf("%p --> %d\n", &arr[i], arr[i]);

    return 0;
}