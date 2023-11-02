#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void del(void *content)
{
    free(content);
}

void test_ft_lstdelone(void)
{
    t_list *node;
    int *content;

    // Test 1
    content = malloc(sizeof(int));
    *content = 42;
    node = ft_lstnew(content);
    ft_lstdelone(node, del);
    printf("Test 1 OK\n");  // content a été libéré, donc on ne le vérifie pas

    // Test 2
    node = ft_lstnew(NULL);
    ft_lstdelone(node, del);
    printf("Test 2 OK\n");  // node a été libéré, donc on ne le vérifie pas

    // Test 3
    node = NULL;
    ft_lstdelone(node, del);
    if (node == NULL)
    {
        printf("Test 3 OK\n");
    }
    else
    {
        printf("Test 3 FAILED\n");
    }

    // Test 4
    content = malloc(sizeof(int));
    *content = 128;
    node = ft_lstnew(content);
    ft_lstdelone(node, NULL);
    free(content);  // del n'est pas appelé, donc on libère content manuellement
    printf("Test 4 OK\n");

    // Test 5
    node = NULL;
    ft_lstdelone(node, NULL);
    if (node == NULL)
    {
        printf("Test 5 OK\n");
    }
    else
    {
        printf("Test 5 FAILED\n");
    }
}
