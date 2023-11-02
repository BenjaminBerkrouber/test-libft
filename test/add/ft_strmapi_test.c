#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char test_function(unsigned int i, char c)
{
    return c + i;
}

void test_ft_strmapi(void)
{
    char *result;
    char *test_str = "abcde";

    result = ft_strmapi(test_str, test_function);
    if (result && strcmp(result, "acegi") == 0)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");
    free(result);

    result = ft_strmapi("", test_function);
    if (result && strcmp(result, "") == 0)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAILED\n");
    free(result);

    result = ft_strmapi(NULL, test_function);
    if (result == NULL)
        printf("Test 3 OK\n");
    else
        printf("Test 3 FAILED\n");

    result = ft_strmapi(test_str, NULL);
    if (result == NULL)
        printf("Test 4 OK\n");
    else
        printf("Test 4 FAILED\n");
}