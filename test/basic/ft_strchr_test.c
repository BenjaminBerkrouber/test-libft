#include "../../libft.h"
#include <stdio.h>
#include "../test.h"

void test_ft_strchr()
{
    char str[] = "Hello, World!";
    char *result;

    result = ft_strchr(str, 'W');
    if (result != NULL)
        printf("Test 1 ok\n");
    else
        printf("Test 1 failed\n");

    result = ft_strchr(str, 'z');
    if (result == NULL)
        printf("Test 2 ok\n");
    else
        printf("Test 2 failed\n");

    result = ft_strchr(str, '\0');
    if (result != NULL && *result == '\0')
        printf("Test 3 ok\n");
    else
        printf("Test 3 failed\n");

    result = ft_strchr(str, 'H');
    if (result != NULL && *result == 'H')
        printf("Test 4 ok\n");
    else
        printf("Test 4 failed\n");
}
