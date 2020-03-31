#include "holberton.h"
/**
 * read_textfile - function that reads a text file and
 *  prints it to the POSIX standard output.
 * @filename: Path of the file
 * @letters:  is the number of letters it should read and print
 *
 * Return: number of character to print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, aux_cont = 1, len_cont = 1;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY | O_EXCL);
	if (fd != -1)
		len_cont = read(fd, buffer, letters);
	else
		len_cont = 0;
	buffer[letters] = '\0';

	aux_cont = write(STDOUT_FILENO, buffer, len_cont);

	if (aux_cont == -1)
		len_cont = 0;

	close(fd);
	free(buffer);
	return (len_cont);
}
