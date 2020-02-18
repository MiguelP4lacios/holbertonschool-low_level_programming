#include "holberton.h"
/**
  * swap_int - swaps the values of two integers.
  * @a: 1th value for swaps
  * @b: 2th value for swaps
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int c  = *a;

	*a = *b;
	*b = c;
}
