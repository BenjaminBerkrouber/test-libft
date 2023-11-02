#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void test_ft_lstlast(void)
{
    t_list *head = NULL;
    t_list *new_node;
    t_list *last_node;
    int *content;

    if (ft_lstlast(head) == NULL)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");

    content = malloc(sizeof(int));
    *content = 42;
    new_node = ft_lstnew(content);
    ft_lstadd_front(&head, new_node);
    if (ft_lstlast(head) == new_node)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAILED\n");

    last_node = ft_lstlast(head);
    if (last_node == new_node && last_node->content == content) // Change != to ==
        printf("Test 3 OK\n");
    else
        printf("Test 3 FAILED\n");


    last_node = ft_lstlast(head);
    if (last_node == new_node && last_node->content == content) // Change != to ==
        printf("Test 4 OK\n");
    else
        printf("Test 4 FAILED\n");

    if (ft_lstlast(NULL) == NULL)
        printf("Test 5 OK\n");
    else
        printf("Test 5 FAILED\n");
    free_list(head);
}

