#include <stdio.h>

int main(void)
{
    int score;
    printf("点数を入力");
    scanf("%d", &score);

    if (score > 100)
    {
        printf("入力が100より大きいので修正\n");
        score = 100;
    }
    printf("点数は %d 点です", score);
    return 0;
}