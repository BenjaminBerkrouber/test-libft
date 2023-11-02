#include "../../libft.h"
#include "../test.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void test_ft_putchar_fd(void)
{
    int fd;
    char buffer[1];
    char test_char = 'A';

    fd = open("tmp_char.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        printf("Failed to open tmp_char.txt for test 1\n");
        return;
    }
    ft_putchar_fd(test_char, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, 1);
    close(fd);
    if (buffer[0] == test_char)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");

    // ft_putchar_fd(test_char, STDOUT_FILENO);
    // printf("\nTest 2 OK\n");

    remove("tmp_char.txt");
}
