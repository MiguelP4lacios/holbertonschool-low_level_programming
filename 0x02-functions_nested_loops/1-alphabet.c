#include "holberton.h"
/**
  * print_alphabet - say me the alphabet, in lowercase.
  *
  * Return: nothing
  */
void print_alphabet(void)
{
	int w;

	for (w = 97 ; w <= 122 ; w++)
		_putchar(w);
	_putchar('\n');
}
