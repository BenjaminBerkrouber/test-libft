#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void del_2(void *content)
{
    free(content);
}

void free_list(t_list *head) {
    t_list *tmp;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp->content);
        free(tmp);
    }
}

void test_ft_lstclear(void)
{
    t_list *head;
    int *content;
    int *first_content;

    head = NULL;
    ft_lstclear(&head, del_2);
    if (head == NULL)
    {
        printf("Test 1 OK\n");
    }
    else
    {
        printf("Test 1 FAILED\n");
    }

    content = malloc(sizeof(int));
    *content = 42;
    head = ft_lstnew(content);
    ft_lstclear(&head, del_2);
    if (head == NULL)
    {
        printf("Test 2 OK\n");
    }
    else
    {
        printf("Test 2 FAILED\n");
    }

    content = malloc(sizeof(int));
    *content = 42;
    head = ft_lstnew(content);
    content = malloc(sizeof(int));
    *content = 84;
    ft_lstadd_back(&head, ft_lstnew(content));
    ft_lstclear(&head, del_2);
    if (head == NULL)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }

    first_content = malloc(sizeof(int));
    *first_content = 42;
    head = ft_lstnew(first_content);
    content = malloc(sizeof(int));
    *content = 84;
    ft_lstadd_back(&head, ft_lstnew(content));
    ft_lstclear(&head, NULL);
    if (head == NULL)
    {
        free(first_content);
        free(content);
        printf("Test 4 OK\n");
    }
    else
    {
        printf("Test 4 FAILED\n");
    }

    head = NULL;
    ft_lstclear(&head, NULL);
    if (head == NULL)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }

    free_list(head);
}
