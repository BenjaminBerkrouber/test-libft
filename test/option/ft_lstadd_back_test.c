#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void test_ft_lstadd_back(void)
{
    t_list *head = NULL;
    t_list *new_node;
    int *content;

    content = malloc(sizeof(int));
    *content = 42;
    new_node = ft_lstnew(content);
    ft_lstadd_back(&head, new_node);
    if (head == new_node)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }
    
    content = malloc(sizeof(int));
    *content = 84;
    t_list *second_node = ft_lstnew(content);
    ft_lstadd_back(&head, second_node);
    if (ft_lstlast(head) == second_node)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }

    content = malloc(sizeof(int));
    *content = 128;
    t_list *third_node = ft_lstnew(content);
    ft_lstadd_back(&head, third_node);
    if (ft_lstlast(head) == third_node)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }

    content = malloc(sizeof(int));
    *content = 256;
    t_list *fourth_node = ft_lstnew(content);
    ft_lstadd_back(&head, fourth_node);
    if (ft_lstlast(head) == fourth_node)
    {
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }

    t_list *new_node_null = NULL;
    ft_lstadd_back(&head, new_node_null);
    if (ft_lstlast(head) == fourth_node)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }
    free_list(head);
}
