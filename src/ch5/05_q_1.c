#include <stdio.h>

int main(void)
{
    int water=195, milk=138;
    printf("%d\n", (int)(1000 - (1 * water + milk * 2) * 1.05));
    return 0;
}