#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: contian string
 * Return: notthig
 */
void puts_half(char *str)
{
	int len = 0;
	int half = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;

		for (i = half; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = (len - 1) / 2;

		for (i = half; i <= len; i++)
		{
			_putchar(str[i]);

		}
	}
	_putchar('\n');
}
