#include <stdio.h>

// int main(void)
// {
//     double data;
//     scanf("%lf", &data);
//     printf("%f\n", data);
//     return 0;
// }

// int main(void)
// {
//     int data1, data2;
//     scanf("%d,%d", &data1, &data2);
//     printf("%d, %d\n", data1, data2);
//     return 0;
// }

int main(void)
{
    int min, max, sum;

    printf("最小値と最大値を , で区切って入力してください. :");
    scanf("%d, %d", &min, &max);

    sum = (min + max) * (max - min + 2) / 2 ;

    printf("%d~%dの合計は%dです\n", min, max, sum);
    return 0;
}