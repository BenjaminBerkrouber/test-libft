#include <stdio.h>
#include "../../libft.h"
#include "../test.h"

void test_ft_bzero()
{
    char buffer[10];
    int i, flag;

    for (i = 0; i < 10; ++i) {
        buffer[i] = 'a';
    }

    ft_bzero(buffer, 5);

    flag = 1;
    for (i = 0; i < 5; ++i) {
        if (buffer[i] != 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Test 1 ok\n");
    else
        printf("Test 1 failed\n");

    ft_bzero(buffer, 0);
    if (buffer[0] == 0 && buffer[9] == 'a')
        printf("Test 2 ok\n");
    else
        printf("Test 2 failed\n");

    ft_bzero(buffer, 10);

    flag = 1;
    for (i = 0; i < 10; ++i) {
        if (buffer[i] != 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Test 3 ok\n");
    else
        printf("Test 3 failed\n");
}
