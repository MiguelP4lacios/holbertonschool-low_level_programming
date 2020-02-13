#include "holberton.h"
/**
  * print_triangle - Print triangle
  * @size: seze of triangle
  * Return: nothing
  */
void print_triangle(int size)
{	
	int i, j, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 1; i <= size; i++)
		{
			for (m = size - 1; m >= i; m--)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}


}
