#include "holberton.h"
/**
 * puts2 - prints a string, followed by a new line, to stdout.
 * @str: contian string
 * Return: notthig
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
