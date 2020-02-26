#include "holberton.h"
/**
  * _puts_recursion - prints a string
  * @s: string to print;
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	if (*s == '\0')
		_putchar('\n');
}
