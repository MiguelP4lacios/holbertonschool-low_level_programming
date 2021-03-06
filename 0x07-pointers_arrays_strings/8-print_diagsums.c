#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  * of a square matrix of integers.
  * @a: matrix 2D.
  * @size: size of matrix
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int i;
	int d1_sum = 0, d2_sum = 0;

	for (i = 0; i < (size * size); (i += (size + 1)))
		d1_sum = d1_sum + a[i];
	for (i = (size - 1); i < (size * size - 1); (i += (size - 1)))
		d2_sum = d2_sum + a[i];

	printf("%d, %d\n", d1_sum, d2_sum);
}
