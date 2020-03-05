#include <stdlib.h>
/**
  * array_range - creates an array of integers.
  * @min: minimun
  * @max: maximun
  * Return: (N)
  */
int *array_range(int min, int max)
{
	int i;
	int *N;

	if (min > max)
		return (NULL);
	N = malloc(sizeof(int) * ((max - min) + 1));
	if (N == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		N[i] = min, min++;
	}
	return (N);
}
