#include <stdlib.h>
/**
  * _calloc - Allocates memory for an array
  * @size: size
  * @nmemb: array element
  * Return: (A)
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *A;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	A =  malloc((nmemb) * size);
	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		A[i] = 0;
	}
	return (A);
}
