#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_strlcpy() {
    char dest[50];
    char src[] = "world";

    ft_strlcpy(dest, src, 50);
    if (strcmp(dest, "world") == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    ft_strlcpy(dest, "hello ", 3);
    if (strcmp(dest, "he") == 0) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    dest[0] = 'x';
    ft_strlcpy(dest, src, 0);
    if (dest[0] == 'x') {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    ft_strlcpy(dest, "longstring", 4);
    if (strcmp(dest, "lon") == 0) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    ft_strlcpy(dest, "short", 6);
    if (strcmp(dest, "short") == 0) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
