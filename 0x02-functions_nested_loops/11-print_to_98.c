#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - say me the values to 98
  * @n: contains the integrate.
  * Return: nothig
  */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else
	{
		for (j = n ; j >= 98 ; j--)
		{
			if (j > 98)
			{
				printf("%d, ", j);
			}
			else
			{
				printf("%d", j);
			}
		}
		printf("\n");
	}


}
