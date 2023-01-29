#include <stdio.h>

// int main(void)
// {
//     int no;
//     scanf("%d", &no);

//     switch (no)
//     {
//     case 1:
//         printf("のび太\n");
//         break;
//     case 2:
//         printf("しすか\n");
//         break;
//     case 3:
//         printf("たけし\n");
//         break;
//     case 4:
//         printf("すねお\n");
//         break;
//     default:
//         printf("知らない人\n");
//         break;
//     }
//     return 0;
// }

int main(void)
{
    int no;
    scanf("%d", &no);

    switch (no)
    {
    case 1:
    case 3:
    case 4:
        printf("男性\n");
        break;
    case 2:
        printf("女性\n");
        break;
   default:
        printf("知らない人\n");
        break;
    }
    return 0;
}