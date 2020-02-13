#include "holberton.h"
/**
  * print_diagonal - Print diagonal..
  * @n: values of diagonal
  * Return: nothing
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i == j)
				{
					_putchar(92);
					_putchar('\n');
				}
				else
				{
					_putchar(32);
				}
			}

		}
	}
}
