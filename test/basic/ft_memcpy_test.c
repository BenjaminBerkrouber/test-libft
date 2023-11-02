#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_memcpy() {
    char dest1[10];
    char dest2[10];
    char src[] = "hello";

    if (memcmp(memcpy(dest1, src, 5), ft_memcpy(dest2, src, 5), 5) == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (memcmp(memcpy(dest1, src, 0), ft_memcpy(dest2, src, 0), 0) == 0) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (memcmp(memcpy(dest1, "", 1), ft_memcpy(dest2, "", 1), 1) == 0) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    char dest3[5] = { 'a', 'b', 'c', 'd', 'e' };
    char dest4[5] = { 'a', 'b', 'c', 'd', 'e' };

    if (memcmp(memcpy(dest3, src, 3), ft_memcpy(dest4, src, 3), 3) == 0) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
}
