#include "holberton.h"
/**
  * print_alphabet_x10 - say me 10 times the alphabet, in lowercase
  *
  * Return: nothing.
  */
void print_alphabet_x10(void)
{
	int _x10;
	int w;

	for (_x10 = 0 ; _x10 <= 9 ; _x10++)
	{
		for (w = 97 ; w <= 122 ; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
