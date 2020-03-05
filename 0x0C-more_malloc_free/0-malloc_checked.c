#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: int the array
  * Return: (A)
  */
void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(b);
	if (A == NULL)
		exit(98);
	return (A);
}
