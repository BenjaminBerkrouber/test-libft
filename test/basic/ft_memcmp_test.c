#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_memcmp() {
    char s1[] = "Hello";
    char s2[] = "World";
    char s3[] = "Hello";
    
    if (ft_memcmp(s1, s2, 5) == memcmp(s1, s2, 5)) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_memcmp(s1, s3, 5) == 0) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_memcmp(s1, s2, 0) == 0) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_memcmp("A", "AA", 1) == memcmp("A", "AA", 1)) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_memcmp("ABC\0D", "ABC\0E", 5) == memcmp("ABC\0D", "ABC\0E", 5)) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
