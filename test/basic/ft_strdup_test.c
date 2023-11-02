#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../test.h"

void test_ft_strdup() {
    char *src = "Hello, World!";
    char *dup;

    dup = ft_strdup(src);
    assert(strcmp(src, dup) == 0);
    printf("Test 1 ok\n");
    free(dup);

    src = "";
    dup = ft_strdup(src);
    assert(strcmp(src, dup) == 0);
    printf("Test 2 ok\n");
    free(dup);

    src = "single";
    dup = ft_strdup(src);
    assert(strcmp(src, dup) == 0);
    printf("Test 3 ok\n");
    free(dup);

    src = malloc(10);
    strcpy(src, "original");
    dup = ft_strdup(src);
    src[0] = 'O';
    if (strcmp(src, dup) != 0)
        printf("Test 4 ok\n");
    else
        printf("Test 4 failed\n");

    free(src);
    free(dup);
}
