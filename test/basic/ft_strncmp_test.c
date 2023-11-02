#include "../../libft.h"
#include <stdio.h>
#include "../test.h"
#include <string.h>

void test_ft_strncmp() {
    if (ft_strncmp("Hello", "Hello", 5) == strncmp("Hello", "Hello", 5)) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_strncmp("Hello", "World", 5) == strncmp("Hello", "World", 5)) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_strncmp("Hello", "hello", 2) == strncmp("Hello", "hello", 2)) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_strncmp("Hello", "", 1) == strncmp("Hello", "", 1)) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_strncmp("", "Hello", 1) == strncmp("", "Hello", 1)) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }

    if (ft_strncmp("", "", 0) == strncmp("", "", 0)) {
        printf("Test 6 ok\n");
    } else {
        printf("Test 6 failed\n");
    }
}
