#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_2d_array(char **array)
{
    for (int i = 0; array[i]; i++)
    {
        free(array[i]);
    }
    free(array);
}

int compare_2d_array(char **array1, char **array2)
{
    int i = 0;
    while (array1[i] && array2[i])
    {
        if (strcmp(array1[i], array2[i]) != 0)
            return 0;
        i++;
    }
    return (array1[i] == NULL && array2[i] == NULL);
}

void test_ft_split(void)
{
    char **result;
    char *expected[] = {"Hello", "World!", NULL};

    result = ft_split("Hello World!", ' ');
    if (result && compare_2d_array(result, expected))
        printf("Test 1 OK\n");
    else
        printf("Test 1 failed\n");
    free_2d_array(result);

    result = ft_split("Hello  World!", ' ');
    if (result && compare_2d_array(result, expected))
        printf("Test 2 OK\n");
    else
        printf("Test 2 failed\n");
    free_2d_array(result);

    result = ft_split(" Hello World! ", ' ');
    if (result && compare_2d_array(result, expected))
        printf("Test 3 OK\n");
    else
        printf("Test 3 failed\n");
    free_2d_array(result);

    result = ft_split("", ' ');
    if (result && result[0] == NULL)
        printf("Test 4 OK\n");
    else
        printf("Test 4 failed\n");
    free_2d_array(result);

}
