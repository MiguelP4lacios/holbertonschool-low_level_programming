#include "holberton.h"
/**
  * more_numbers - say me the numbers, 0 to 14.
  *
  * Return: nothing
  */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');

		}
		_putchar('\n');
	}
}
