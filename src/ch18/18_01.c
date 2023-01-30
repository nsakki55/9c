#include <stdio.h>

#define EXCISETAX 0.03

int main(void)
{
    int price;

    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); /* 定数使用 */
    printf("税込価格:%d\n", price);

    return 0;
}