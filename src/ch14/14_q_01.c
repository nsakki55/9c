#include <stdio.h>
#include <string.h>

int main(void)
{
    char shimei[32], namae[32];
    scanf("%s", shimei);
    scanf("%s", namae);

    strcat(shimei, namae);
    printf("%s\n", shimei);

    return 0;
}