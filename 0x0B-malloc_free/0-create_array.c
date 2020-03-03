#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size: size  of the array
  * @c: character
  * Return: (A)
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}
	A =  malloc(sizeof(c) * size);
	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
