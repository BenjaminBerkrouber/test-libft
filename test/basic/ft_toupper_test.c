#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_toupper() {
    if (ft_toupper('a') == 'A') {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_toupper('z') == 'Z') {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_toupper('A') == 'A') {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_toupper('1') == '1') {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
}