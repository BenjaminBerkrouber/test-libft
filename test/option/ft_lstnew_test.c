#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_lstnew(void)
{
    t_list *new_node;

    int *nbr = malloc(sizeof(int));
    *nbr = 42;
    new_node = ft_lstnew(nbr);
    if (new_node && *((int *)new_node->content) == 42 && new_node->next == NULL)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }
    free(nbr);
    free(new_node);

    char *str = strdup("Hello");
    new_node = ft_lstnew(str);
    if (new_node && strcmp((char *)new_node->content, "Hello") == 0 && new_node->next == NULL)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }
    free(str);
    free(new_node);

    new_node = ft_lstnew(NULL);
    if (new_node && new_node->content == NULL && new_node->next == NULL)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }
    free(new_node);

    int *large_data = malloc(1024 * 1024 * 10);
    new_node = ft_lstnew(large_data);
    if (new_node && new_node->content == large_data && new_node->next == NULL)
    {
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }
    free(large_data);
    free(new_node);

    double *dbl = malloc(sizeof(double));
    *dbl = 3.14159;
    new_node = ft_lstnew(dbl);
    if (new_node && *((double *)new_node->content) == 3.14159 && new_node->next == NULL)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }
    free(dbl);
    free(new_node);
}