#include "holberton.h"
#include <stdio.h>
/**
  * _strspn - gets the length of a prefix substring..
  * @s: C string to be scanned.
  * @accept: C string containing the characters to match.
  * Return: ()
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *n;

	for (i = 0; *s; s++, i++)
	{
		for (n = accept; *n && *n != *s; n++)
		{
		}
		if (*n == '\0')
			break;
	}
	return (i);
}
