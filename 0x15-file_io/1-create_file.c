#include "holberton.h"
int str_len(char *);
/**
 * create_file - function that creates a file.
 * @filename: Path file
 * @text_content: content of the file
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
		{
			return (-1);
		}
	}
	f_write = write(fd, text_content, str_len(text_content));
	if (f_write == -1)
		return (-1);
	close(fd);
	return (1);
}
/**
  * str_len - size de un string
  * @s: string
  * Return:len
  */
int str_len(char *s)
{
	int len = 0;

	while (s[len++])
		continue;
	return (len - 1);
}
