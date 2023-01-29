#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0) printf("夏オリンピック");
    if (year % 4 == 2) printf("冬オリンピック");
    return 0;
}