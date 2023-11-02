#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../test.h"

void test_ft_memset()
{
    char buffer1[10];
    char buffer2[10];
    int arr1[5];
    int arr2[5];
    int i, flag;

    ft_memset(buffer1, 'a', 9);
    memset(buffer2, 'a', 9);
    buffer1[9] = '\0';
    buffer2[9] = '\0';
    if (strcmp(buffer1, buffer2) == 0)
        printf("Test 1 ok\n");
    else
        printf("Test 1 failed\n");

    ft_memset(buffer1, '$', 5);
    memset(buffer2, '$', 5);
    buffer1[5] = '\0';
    buffer2[5] = '\0';
    if (strcmp(buffer1, buffer2) == 0)
        printf("Test 2 ok\n");
    else
        printf("Test 2 failed\n");

    ft_memset(arr1, 1, sizeof(arr1));
    memset(arr2, 1, sizeof(arr2));

    flag = 1;
    for (i = 0; i < 5; ++i) {
        if (arr1[i] != arr2[i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Test 3 ok\n");
    else
        printf("Test 3 failed\n");

    // ft_memset(buffer1, 'b', 0);
    // memset(buffer2, 'b', 0);
    // if (strcmp(buffer1, buffer2) == 0)
    //     printf("Test 4 ok\n");
    // else
    //     printf("Test 4 failed\n");
}
