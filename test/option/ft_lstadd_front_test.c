#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void test_ft_lstadd_front(void)
{
    t_list *head = NULL;
    t_list *new_node;
    int *content;

    content = malloc(sizeof(int));
    *content = 42;
    new_node = ft_lstnew(content);
    ft_lstadd_front(&head, new_node);
    if (head && *((int *)head->content) == 42)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }

    content = malloc(sizeof(int));
    *content = 84;
    new_node = ft_lstnew(content);
    ft_lstadd_front(&head, new_node);
    if (head && *((int *)head->content) == 84 && *((int *)head->next->content) == 42)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }

    new_node = ft_lstnew(NULL);
    ft_lstadd_front(&head, new_node);
    if (head && head->content == NULL)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }

    t_list *null_head = NULL;
    content = malloc(sizeof(int));
    *content = 1;
    new_node = ft_lstnew(content);
    ft_lstadd_front(&null_head, new_node);
    if (null_head && *((int *)null_head->content) == 1)
    {
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }
    free_list(null_head);
    free_list(head);
}
