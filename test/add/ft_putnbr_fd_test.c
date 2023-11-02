#include "../../libft.h"
#include "../test.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void test_ft_putnbr_fd(void)
{
    int fd;
    char buffer[50];
    int test_nbr1 = 12345;
    int test_nbr2 = -54321;

    fd = open("tmp_nbr1.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        printf("Failed to open tmp_nbr1.txt for test 1\n");
        return;
    }
    ft_putnbr_fd(test_nbr1, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, 5);
    buffer[5] = '\0';
    close(fd);
    if (strcmp(buffer, "12345") == 0)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAILED\n");

    fd = open("tmp_nbr2.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        printf("Failed to open tmp_nbr2.txt for test 2\n");
        return;
    }
    ft_putnbr_fd(test_nbr2, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, 6);
    buffer[6] = '\0';
    close(fd);
    if (strcmp(buffer, "-54321") == 0)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAILED\n");

    remove("tmp_nbr1.txt");
    remove("tmp_nbr2.txt");
}

