#include "holberton.h"
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int _x10;
	int w;

	for(_x10 = 0 ; _x10 <= 9 ; _x10++)
	{
		for(w = 97 ; w <= 122 ; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
