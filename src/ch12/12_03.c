#include <stdio.h>

int count;

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    static int count;

    count++;
    printf("%d\n", count);

    return count;
}