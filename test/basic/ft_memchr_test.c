#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_memchr() {
    const char arr[] = "Hello World";
    
    if (ft_memchr(arr, 'e', 11) == memchr(arr, 'e', 11)) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if (ft_memchr(arr, 'z', 11) == NULL) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_memchr(arr, 'e', 0) == NULL) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_memchr(arr, 'd', 11) == memchr(arr, 'd', 11)) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_memchr(arr, 'H', 11) == memchr(arr, 'H', 11)) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}
