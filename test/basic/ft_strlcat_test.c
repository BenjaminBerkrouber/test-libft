#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_strlcat() {
    char dest[50];
    char src[] = "world";

    strcpy(dest, "hello ");
    if (ft_strlcat(dest, src, 50) == 11) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    strcpy(dest, "hello ");
    if (ft_strlcat(dest, src, 10) == 11) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    strcpy(dest, "hello ");
    if (ft_strlcat(dest, src, 0) == 5) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    strcpy(dest, "hello ");
    if (ft_strlcat(dest, src, 9) == 11) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    strcpy(dest, "hello");
    if (ft_strlcat(dest, src, 11) == 10) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
