#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_atoi() {
    if (ft_atoi("42") == atoi("42")) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_atoi("-42") == atoi("-42")) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_atoi("0") == atoi("0")) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_atoi("2147483647") == atoi("2147483647")) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_atoi("-2147483648") == atoi("-2147483648")) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }

    if (ft_atoi("  \t\n  \r\v\f42") == atoi("  \t\n  \r\v\f42")) {
        printf("Test 6 ok\n");
    } else {
        printf("Test 6 failed\n");
    }
}