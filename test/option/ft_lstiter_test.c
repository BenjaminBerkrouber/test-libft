#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void test_function_2(void *content)
{
    int *i = (int *)content;
    *i *= 2;
}

void test_ft_lstiter(void)
{
    int *num1 = malloc(sizeof(int));
    *num1 = 1;
    int *num2 = malloc(sizeof(int));
    *num2 = 2;
    int *num3 = malloc(sizeof(int));
    *num3 = 3;

    t_list *lst = ft_lstnew(num1);
    t_list *second = ft_lstnew(num2);
    t_list *third = ft_lstnew(num3);
    
    ft_lstadd_back(&lst, second);
    ft_lstadd_back(&lst, third);

    ft_lstiter(lst, test_function_2);
    if (*((int *)lst->content) == 2 && *((int *)second->content) == 4 && *((int *)third->content) == 6)
        printf("Test 1 OK\n");
    else
        printf("Test 1 Failed\n");

    t_list *empty = NULL;
    ft_lstiter(empty, test_function_2);
    printf("Test 2 OK\n");

    ft_lstiter(lst, NULL);
    printf("Test 3 OK\n");

    int *num4 = malloc(sizeof(int));
    *num4 = 10;
    t_list *single = ft_lstnew(num4);
    ft_lstiter(single, test_function_2);
    if (*((int *)single->content) == 20)
        printf("Test 4 OK\n");
    else
        printf("Test 4 Failed\n");

    ft_lstiter(lst, test_function_2);
    if (*((int *)lst->content) == 4 && *((int *)second->content) == 8 && *((int *)third->content) == 12)
        printf("Test 5 OK\n");
    else
        printf("Test 5 Failed\n");

    free_list(lst);
    free_list(single);
}
