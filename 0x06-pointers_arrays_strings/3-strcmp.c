#include "holberton.h"
#include <stdio.h>
/**
  * _strcmp - compares two strings.
  * @s1: 1th string.
  * @s2: 2th string.
  * Return: integer
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
