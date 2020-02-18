#include "holberton.h"
/**
  * print_rev - prints a string, in reverse, followed by a new line.
  * @s: contian string to reverse
  * Return: nothing
  */
void print_rev(char *s)
{
	int i = 0; /*tamaño de la cadena de caracteres*/
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
