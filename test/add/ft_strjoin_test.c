#include "../../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../test.h"

void test_ft_strjoin(void)
{
    char *result;

    // Test 1: s1 et s2 normaux
    result = ft_strjoin("Hello", ", World!");
    if (result && strcmp(result, "Hello, World!") == 0)
        printf("Test 1 OK!\n");
    else
        printf("Test 1 failed\n");
    free(result);

    // Test 2: s1 vide
    result = ft_strjoin("", ", World!");
    if (result && strcmp(result, ", World!") == 0)
        printf("Test 2 OK!\n");
    else
        printf("Test 2 failed\n");
    free(result);

    // Test 3: s2 vide
    result = ft_strjoin("Hello", "");
    if (result && strcmp(result, "Hello") == 0)
        printf("Test 3 OK!\n");
    else
        printf("Test 3 failed\n");
    free(result);

    // Test 4: s1 et s2 vides
    result = ft_strjoin("", "");
    if (result && strcmp(result, "") == 0)
        printf("Test 4 OK!\n");
    else
        printf("Test 4 failed\n");
    free(result);
}