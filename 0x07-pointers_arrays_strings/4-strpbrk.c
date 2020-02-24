#include "holberton.h"
/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: C string to be scanned.
  * @accept: C string containing the characters to match.
  * Return: ()
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
