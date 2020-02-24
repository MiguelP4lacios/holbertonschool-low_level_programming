#include "holberton.h"
/**
  * _memcpy - copies memory area.
  * @dest: Pointer to the destination array where the content is to be copied
  * @src: Pointer to the source of data to be copied.
  * @n: Number of bytes to copy..
  * Return: (dest)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
