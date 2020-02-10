#include "holberton.h"
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	int w;

	for(w = 97 ; w <= 122 ; w++)
		_putchar(w);
	_putchar('\n');
}
