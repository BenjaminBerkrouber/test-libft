#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <string.h>

void test_function_striteri(unsigned int i, char *c)
{
    *c = *c + i;
}

void test_ft_striteri(void)
{
    char test_str1[] = "abcde";
    char test_str2[] = "";
    char test_str3[] = "12345";
    char *null_str = NULL;

    ft_striteri(test_str1, test_function_striteri);
    if (strcmp(test_str1, "acegi") == 0)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");

    ft_striteri(test_str2, test_function_striteri);
    if (strcmp(test_str2, "") == 0)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAILED\n");

    ft_striteri(test_str3, test_function_striteri);
    if (strcmp(test_str3, "13579") == 0)
        printf("Test 3 OK\n");
    else
        printf("Test 3 FAILED\n");

    ft_striteri(null_str, test_function_striteri);
    if (null_str == NULL)
        printf("Test 4 OK\n");
    else
        printf("Test 4 FAILED\n");

    char test_str5[] = "abcde";
    ft_striteri(test_str5, NULL);
    if (strcmp(test_str5, "abcde") == 0)
        printf("Test 5 OK\n");
    else
        printf("Test 5 FAILED\n");
}