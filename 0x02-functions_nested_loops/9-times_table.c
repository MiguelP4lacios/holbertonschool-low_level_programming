#include "holberton.h"
/**
 * times_table - say me the the 9 times table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
