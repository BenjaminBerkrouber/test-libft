#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_isalnum() {
    if (ft_isalnum('a') == 1) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_isalnum('Z') == 1) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_isalnum('4') == 1) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_isalnum(' ') == 0) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_isalnum('@') == 0) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
