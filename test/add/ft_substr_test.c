#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_substr(void)
{
    char *test_str = "Hello, World!";
    char *result;

    result = ft_substr(test_str, 0, 5);
    if (result && strcmp(result, "Hello") == 0)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 0, 50);
    if (result && strcmp(result, "Hello, World!") == 0)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }
    free(result);

    result = ft_substr("", 0, 5);
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 50, 5);
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 0, 0);
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 0, 0);
    if (result && strcmp(result, "") == 0)
    {
        printf("Test 6 OK\n");
    }
    else
    {
        printf("Test 6 FAILED\n");
    }
    free(result);

    result = ft_substr(NULL, 0, 5);
    if (result == NULL)
    {
        printf("Test 7 OK\n");
    }
    else
    {
        printf("Test 7 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 0, strlen(test_str));
    if (result && strcmp(result, test_str) == 0)
    {
        printf("Test 8 OK\n");
    }
    else
    {
        printf("Test 8 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, strlen(test_str) - 1, 1);
    if (result && strcmp(result, "!") == 0)
    {
        printf("Test 9 OK\n");
    }
    else
    {
        printf("Test 9 FAILED\n");
    }
    free(result);

    result = ft_substr(test_str, 0, 1);
    if (result && strcmp(result, "H") == 0)
    {
        printf("Test 10 OK\n");
    }
    else
    {
        printf("Test 10 FAILED\n");
    }
    free(result);
}
