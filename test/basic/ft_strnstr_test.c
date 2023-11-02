#include "../../libft.h"
#include <stdio.h>
#include "../test.h"
#include <string.h>

void test_ft_strnstr() {
    char *result = ft_strnstr("Hello, World!", "World", 13);
    if (result && strcmp(result, "World!") == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    result = ft_strnstr("Hello, World!", "world", 13);
    if (result == NULL) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    result = ft_strnstr("Hello, World!", "Hello", 5);
    if (result && strcmp(result, "Hello, World!") == 0) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    result = ft_strnstr("Hello, World!", "o, W", 5);
    if (result == NULL) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    result = ft_strnstr("Hello, World!", "", 13);
    if (result && strcmp(result, "Hello, World!") == 0) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }

    result = ft_strnstr("Hello, World!", "z", 13);
    if (result == NULL) {
        printf("Test 6 ok\n");
    } else {
        printf("Test 6 failed\n");
    }
}
