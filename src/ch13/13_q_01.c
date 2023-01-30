#include <stdio.h>

int main(void)
{
    int array[10] = {};
    int i;
    int j;
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        scanf("%d", &array[i]);
    }

    for (j = 0; j < sizeof(array) / sizeof(array[0]); j++) {
        printf("array[%d]: %d\n", 9 - j, array[9-j]);
    }

    return 0;
}