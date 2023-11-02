#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_isascii() {
    if (ft_isascii(0)) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_isascii(127)) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_isascii(50)) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_isascii(128)) {
        printf("Test 4 failed\n");
    } else {
        printf("Test 4 ok\n");
    }
}
