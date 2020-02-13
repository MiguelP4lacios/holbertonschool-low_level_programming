#include "holberton.h"
/**
  * print_numbers - say me the numbers, 0 to 9.
  *
  * Return: nothing
  */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
