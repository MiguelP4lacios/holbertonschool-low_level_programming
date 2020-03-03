#include <stdlib.h>
/**
  * alloc_grid - function that returns a pointer
  * @width: row
  * @height: column
  * Return: A
  */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **A;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	A = malloc(sizeof(int *) * height);
	if (A == NULL)
	{
		free(A);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(int) * width);
		if (A[i] == NULL)
		{
			for (; i >= 0; i--)
				free(A[i]);
			free(A);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			A[j][k] = 0;
		}
	}
	return (A);
}
