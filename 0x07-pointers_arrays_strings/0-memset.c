#include "holberton.h"
/**
  * _memset - fills memory with a constant byte
  * @s: Pointer to the block of memory to fill.
  * @b: Value to be set.
  * @n: Number of bytes to be set to the value.
  * Return: (s)
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *cp = s;

	while (n > 0)
	{
		*cp = b;
		if (*cp == 0)
			break;
		cp++;
		n--;
	}
	return (s);
}
