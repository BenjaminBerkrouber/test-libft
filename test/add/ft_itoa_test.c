#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_itoa(void)
{
    char *result;

    result = ft_itoa(42);
    if (result && strcmp(result, "42") == 0)
        printf("Test 1 OK\n");
    else
        printf("Test 1 failed\n");
    free(result);

    result = ft_itoa(0);
    if (result && strcmp(result, "0") == 0)
        printf("Test 2 OK\n");
    else
        printf("Test 2 failed\n");
    free(result);

    result = ft_itoa(-42);
    if (result && strcmp(result, "-42") == 0)
        printf("Test 3 OK\n");
    else
        printf("Test 3 failed\n");
    free(result);

    result = ft_itoa(-2147483648);
    if (result && strcmp(result, "-2147483648") == 0)
        printf("Test 4 OK\n");
    else
        printf("Test 4 failed\n");
    free(result);
}
