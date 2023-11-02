#include "../../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../test.h"

void test_ft_calloc() {
    void *ptr1;
    void *ptr2;

    ptr1 = ft_calloc(5, sizeof(int));
    ptr2 = calloc(5, sizeof(int));
    if (memcmp(ptr1, ptr2, 5 * sizeof(int)) == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }
    free(ptr1);
    free(ptr2);

    ptr1 = ft_calloc(0, sizeof(int));
    if (ptr1 != NULL) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }
    free(ptr1);

    ptr1 = ft_calloc(5, 0);
    if (ptr1 != NULL) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }
    free(ptr1);

    ptr1 = ft_calloc(6, sizeof(char));
    strcpy(ptr1, "Hello");
    if (strcmp(ptr1, "Hello") == 0) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }
    free(ptr1);

    ptr1 = ft_calloc(10000, sizeof(char));
    if (ptr1 != NULL) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
    free(ptr1);
}
