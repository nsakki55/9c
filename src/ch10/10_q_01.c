#include <stdio.h>

int main(void)
{
    int score;
    printf("点数:");
    scanf("%d", &score);

    do {
        printf("点数:");
        scanf("%d", &score);
    } while ((score < 0) || (score > 101));

    printf("点数:%d", score);
    return 0;    
}