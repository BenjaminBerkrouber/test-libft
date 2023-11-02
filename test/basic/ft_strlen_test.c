#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../test.h"

void test_ft_strlen()
{
    if (ft_strlen("Hello") == 5)
        printf("Test 1 ok\n");
    else
        printf("Test 1 failed\n");

    if (ft_strlen("") == 0)
        printf("Test 2 ok\n");
    else
        printf("Test 2 failed\n");
}
