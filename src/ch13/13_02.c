#include <stdio.h>
#include <memory.h>

// int main(void)
// {
//     int array[10] = {42, 79, 13};

//     printf("array[0] = %d\n", array[0]);
//     printf("array[1] = %d\n", array[1]);
//     printf("array[2] = %d\n", array[2]);
//     printf("array[3] = %d\n", array[3]);
//     printf("array[4] = %d\n", array[4]);

//     return 0;
// }

// int main(void)
// {
//     int array[] = {42, 79, 13};

//     printf("array[0] = %d\n", array[0]);
//     printf("array[1] = %d\n", array[1]);
//     printf("array[2] = %d\n", array[2]);

//     return 0;
// }

// int main(void)
// {
//     int array[] = {42, 79, 13, 75, 79};
//     int i;
//     int array_count = sizeof(array) / sizeof(array[0]);

//     for (i = 0; i < array_count; i++) {
//         printf("array[%d] = %d\n", i, array[i]);
//     }
//     return 0;
// }

int main(void)
{
    int array1[] = {42, 79, 13, 75, 79};
    int array2[] = {1, 2, 3, 4, 5};
    int i;
    
    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1));

    // for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
    //     array2[i] = array1[i];
    // }

    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}