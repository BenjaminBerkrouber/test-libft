#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_strtrim(void)
{
    char *result;

    result = ft_strtrim("  Hello, World!  ", " ");
    printf("debug, %s\n", result);
    if (result && strcmp(result, "Hello, World!") == 0)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }
    free(result);

    result = ft_strtrim("  Hello, World!  ", "");
    if (result && strcmp(result, "  Hello, World!  ") == 0)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }
    free(result);

    result = ft_strtrim("", " ");
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }
    free(result);

    result = ft_strtrim("     ", " ");
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }
    free(result);

    result = ft_strtrim(NULL, " ");
    if (result == NULL)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }
    free(result);
}
