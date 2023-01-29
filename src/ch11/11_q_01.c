#include <stdio.h>

void olympic(int);

int main(void)
{
    int year;
    scanf("%d", &year);

    olympic(year);
    return 0;
}

void olympic(int year)
{
    if (year % 4 == 0) {
        printf("夏オリンピック\n");
    } else if (year % 4 == 2) {
        printf("冬オリンピック\n");
    } else {
        printf("なし\n");
    }
}