#include "holberton.h"
/**
 * main - program that copies the content
 * of a file to another file.
 * @ac: Number arg
 * @av: args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	int count = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	if (av == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		exit(98);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	count = read(fd1, buffer, 1024);
	write(fd2, buffer, count);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd1) == -1 && close(fd2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
