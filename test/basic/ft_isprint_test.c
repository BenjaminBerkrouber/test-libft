#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_isprint() {
    if (ft_isprint('a')) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_isprint(' ')) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (!ft_isprint(0)) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (!ft_isprint(127)) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
}
