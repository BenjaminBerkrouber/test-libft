#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include "../test.h"

void test_ft_memmove()
{
    char dest[50];
    char src[] = "abcdefghijklmnopqrstuvwxyz";

    strcpy(dest, "12345");
    ft_memmove(dest, src, 5);
    if (strncmp(dest, "abcde", 5) == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    strcpy(dest, "1234567890");
    ft_memmove(dest + 4, dest, 5);
    if (strncmp(dest, "123412345", 9) == 0) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_memmove(NULL, src, 0) == NULL) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    strcpy(dest, "12345");
    if (ft_memmove(dest, src, 0) == dest) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
}