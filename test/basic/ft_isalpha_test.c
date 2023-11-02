#include "../../libft.h"
#include <stdio.h>
#include <ctype.h>
#include "../test.h"

void test_ft_isalpha() {
    if ((ft_isalpha('a') != 0) == (isalpha('a') != 0)) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if ((ft_isalpha('Z') != 0) == (isalpha('Z') != 0)) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_isalpha('4') == isalpha('4')) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_isalpha(' ') == isalpha(' ')) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_isalpha('@') == isalpha('@')) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
