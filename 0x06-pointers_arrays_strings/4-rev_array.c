#include "holberton.h"
/**
  * reverse_array - reverses a array.
  * @a: contian array to reverse.
  * @n: size of the array.
  * Return: nothig
  */
void reverse_array(int *a, int n)
{
	int j;
	int *aux_1;
	int *aux_2;
	int c;

	aux_1 = a;
	aux_2 = a;

	for (j = 0; j < n - 1; j++)
	{
		aux_2++;
	}
	for (j = 0; j < n / 2; j++)
	{
		c = *aux_2;
		*aux_2 = *aux_1;
		*aux_1 = c;
		aux_1++;
		aux_2--;
	}
}
