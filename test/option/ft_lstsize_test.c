#include "../../libft.h"
    #include "../test.h"
    #include <stdio.h>
    #include <stdlib.h>

    void test_ft_lstsize(void)
    {
        t_list *head = NULL;
        t_list *new_node;
        int *content;

        if (ft_lstsize(head) == 0)
        {
            printf("Test 1 OK\n");
        }
        else
        {
            printf("Test 1 FAILED\n");
        }

        content = malloc(sizeof(int));
        *content = 42;
        new_node = ft_lstnew(content);
        ft_lstadd_front(&head, new_node);
        if (ft_lstsize(head) == 1)
        {
            printf("Test 2 OK\n");
        }
        else
        {
            printf("Test 2 FAILED\n");
        }

        content = malloc(sizeof(int));
        *content = 84;
        new_node = ft_lstnew(content);
        ft_lstadd_front(&head, new_node);
        if (ft_lstsize(head) == 2)
        {
            printf("Test 3 OK\n");
        }
        else
        {
            printf("Test 3 FAILED\n");
        }

        content = malloc(sizeof(int));
        *content = 128;
        new_node = ft_lstnew(content);
        ft_lstadd_front(&head, new_node);
        if (ft_lstsize(head) == 3)
        {
            printf("Test 4 OK\n");
        }
        else
        {
            printf("Test 4 FAILED\n");
        }

        if (ft_lstsize(NULL) == 0)
        {
            printf("Test 5 OK\n");
        }
        else
        {
            printf("Test 5 FAILED\n");
        }
        free_list(head);
    }
