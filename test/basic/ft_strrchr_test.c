#include "../../libft.h"
#include <stdio.h>
#include "../test.h"
#include <string.h>

void test_ft_strrchr() {
    if (ft_strrchr("Hello, World!", 'o') == strrchr("Hello, World!", 'o')) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_strrchr("Hello, World!", 'z') == strrchr("Hello, World!", 'z')) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_strrchr("Hello, World!", 'H') == strrchr("Hello, World!", 'H')) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_strrchr("abcdefg", 'a') == strrchr("abcdefg", 'a')) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_strrchr("abcdefg", '\0') == strrchr("abcdefg", '\0')) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
