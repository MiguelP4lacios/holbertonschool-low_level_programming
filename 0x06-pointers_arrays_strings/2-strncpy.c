#include "holberton.h"
#include <stdio.h>
/**
  * _strncpy - n copies the string pointed to by src.
  * @dest: destination
  * @src: string to copy
  * @n: n Bytes
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
