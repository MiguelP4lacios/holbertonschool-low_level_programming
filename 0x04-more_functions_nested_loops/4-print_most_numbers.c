#include "holberton.h"
/**
  * print_most_numbers - say me the numbers, 0 to 9, less 2 and 4
  *
  * Return: nothing
  */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
