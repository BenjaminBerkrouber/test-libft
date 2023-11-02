#include "../../libft.h"
#include "../test.h"
#include <stdio.h>
#include <stdlib.h>

void *map_function(void *content)
{
    int *i = (int *)content;
    int *new_i = malloc(sizeof(int));
    if (new_i != NULL) {
        *new_i = *i * 2;
    }
    return new_i;
}

void del_function(void *content)
{
    free(content);
}

void test_ft_lstmap(void)
{
    // Initialisation
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    int *num3 = malloc(sizeof(int));
    *num1 = 1;
    *num2 = 2;
    *num3 = 3;

    t_list *lst = ft_lstnew(num1);
    t_list *second = ft_lstnew(num2);
    t_list *third = ft_lstnew(num3);
    
    ft_lstadd_back(&lst, second);
    ft_lstadd_back(&lst, third);

    // Test 1
    t_list *new_lst = ft_lstmap(lst, map_function, del_function);
    if (*((int *)new_lst->content) == 2 && *((int *)new_lst->next->content) == 4 && *((int *)new_lst->next->next->content) == 6)
        printf("Test 1 OK\n");
    else
        printf("Test 1 Failed\n");

    // Test 2
    t_list *empty = NULL;
    t_list *new_empty = ft_lstmap(empty, map_function, del_function);
    if (new_empty == NULL)
        printf("Test 2 OK\n");
    else
        printf("Test 2 Failed\n");

    // Test 3
    t_list *null_map = ft_lstmap(lst, NULL, del_function);
    if (null_map == NULL)
        printf("Test 3 OK\n");
    else
        printf("Test 3 Failed\n");

    // Test 4
    int *num4 = malloc(sizeof(int));
    *num4 = 10;
    t_list *single = ft_lstnew(num4);
    t_list *new_single = ft_lstmap(single, map_function, del_function);
    if (*((int *)new_single->content) == 20)
        printf("Test 4 OK\n");
    else
        printf("Test 4 Failed\n");

    // Libération de la mémoire
    ft_lstclear(&new_lst, del_function);
    ft_lstclear(&new_empty, del_function);
    ft_lstclear(&null_map, del_function);
    ft_lstclear(&new_single, del_function);
    ft_lstclear(&lst, del_function);
    ft_lstclear(&single, del_function); // Ajouté pour libérer la mémoire de la liste 'single'
}
