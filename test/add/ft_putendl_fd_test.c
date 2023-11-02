#include "../../libft.h"
#include "../test.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void test_ft_putendl_fd(void)
{
    int fd;
    char buffer[50];
    char *test_str = "Hello, world!";

    fd = open("tmp_endline.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        printf("Failed to open tmp_endline.txt for test 1\n");
        return;
    }
    ft_putendl_fd(test_str, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, strlen(test_str) + 1);
    buffer[strlen(test_str) + 1] = '\0';
    close(fd);
    if (strcmp(buffer, "Hello, world!\n") == 0)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");

    // ft_putendl_fd(test_str, STDOUT_FILENO);
    // printf("Test 2 OK\n");

    remove("tmp_endline.txt");
}

