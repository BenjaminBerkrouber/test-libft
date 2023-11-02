#include "../../libft.h"
#include <stdio.h>
#include <ctype.h>
#include "../test.h"

void test_ft_isdigit() {
    if ((ft_isdigit('0') == 0) == (isdigit('0')) == 0) {
        printf("Test 1 ok\n");
    } else {
        printf("Test 1 failed\n");
    }

    if ((ft_isdigit('9') == 0) == (isdigit('9')) == 0) {
        printf("Test 2 ok\n");
    } else {
        printf("Test 2 failed\n");
    }

    if (ft_isdigit('a') == isdigit('a')) {
        printf("Test 3 ok\n");
    } else {
        printf("Test 3 failed\n");
    }

    if (ft_isdigit(' ') == isdigit(' ')) {
        printf("Test 4 ok\n");
    } else {
        printf("Test 4 failed\n");
    }

    if (ft_isdigit('@') == isdigit('@')) {
        printf("Test 5 ok\n");
    } else {
        printf("Test 5 failed\n");
    }
}   
