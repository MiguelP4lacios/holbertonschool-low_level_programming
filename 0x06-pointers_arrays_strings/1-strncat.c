#include "holberton.h"
#include <stdio.h>
/**
  * _strncat - n concatenates two strings..
  * @dest: destination
  * @src: origin.
  * @n: n Bytes
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);

}
