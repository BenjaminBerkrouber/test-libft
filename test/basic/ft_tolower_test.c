#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_tolower() {
    if (ft_tolower('A') == 'a') {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_tolower('Z') == 'z') {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_tolower('a') == 'a') {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_tolower('1') == '1') {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
}
