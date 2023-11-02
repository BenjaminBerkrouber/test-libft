#include "libft.h"
#include <string.h>
#include <stdio.h>
#include "test/test.h"

void run_test(const char *test_name, void (*test_function)(void)) {
    printf("Test fonction: %s\n", test_name);
    test_function();
    printf("\n\n");
}

int main()
{
// //    BASIC
    run_test("test_ft_isalpha", test_ft_isalpha);
    run_test("test_ft_isdigit", test_ft_isdigit);
    run_test("test_ft_isalnum", test_ft_isalnum);
    run_test("test_ft_isascii", test_ft_isascii);
    run_test("test_ft_isprint", test_ft_isprint);
    run_test("test_ft_strlen", test_ft_strlen);
    run_test("test_ft_memset", test_ft_memset);
    run_test("test_ft_bzero", test_ft_bzero);
    run_test("test_ft_memcpy", test_ft_memcpy);
    run_test("test_ft_memmove", test_ft_memmove);
    run_test("test_ft_strlcpy", test_ft_strlcpy);
    run_test("test_ft_strlcat", test_ft_strlcat);
    run_test("test_ft_toupper", test_ft_toupper);
    run_test("test_ft_tolower", test_ft_tolower);
    run_test("test_ft_strchr", test_ft_strchr);
    run_test("test_ft_strrchr", test_ft_strrchr);
    run_test("test_ft_strncmp", test_ft_strncmp);
    run_test("test_ft_memchr", test_ft_memchr);
    run_test("test_ft_memcmp", test_ft_memcmp);
    run_test("test_ft_strnstr", test_ft_strnstr);
    run_test("test_ft_atoi", test_ft_atoi);
    run_test("test_ft_strdup", test_ft_strdup);
    run_test("test_ft_calloc", test_ft_calloc);

// //    ADD
    run_test("test_ft_substr",test_ft_substr);    
    run_test("test_ft_strjoin", test_ft_strjoin);
    run_test("test_ft_strtrim",test_ft_strtrim);
    run_test("test_ft_split", test_ft_split);
    run_test("test_ft_itoa", test_ft_itoa);
    run_test("test_ft_strmapi", test_ft_strmapi);
    run_test("test_ft_striteri", test_ft_striteri);
    run_test("test_ft_putchar_fd", test_ft_putchar_fd);
    run_test("test_ft_putstr_fd",test_ft_putstr_fd);
    run_test("test_ft_putendl_fd", test_ft_putendl_fd);
    run_test("test_ft_putnbr_fd", test_ft_putnbr_fd);

// Bonus
    run_test("test_ft_lstnew", test_ft_lstnew);
    run_test("test_ft_lstadd_front", test_ft_lstadd_front);
    run_test("test_ft_lstsize", test_ft_lstsize);
    run_test("test_ft_lstlast", test_ft_lstlast);
    run_test("test_ft_lstadd_back", test_ft_lstadd_back);
//    run_test("test_ft_lstdelone", test_ft_lstdelone);
//    run_test("test_ft_lstclear", test_ft_lstclear);
    run_test("test_ft_lstiter", test_ft_lstiter);
    run_test("test_ft_lstmap", test_ft_lstmap);

    return 0;
}
