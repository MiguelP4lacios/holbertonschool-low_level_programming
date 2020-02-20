#include "holberton.h"
/**
  * leet -  encodes a string into 1337.
  * @s: string to convert
  * Return: s econdes
  */
char *leet(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == 'a' || s[j] == 'A')
			s[j] = '4';
		if (s[j] == 'e' || s[j] == 'E')
			s[j] = '3';
		if (s[j] == 'o' || s[j] == 'O')
			s[j] = '0';
		if (s[j] == 't' || s[j] == 'T')
			s[j] = '7';
		if (s[j] == 'l' || s[j] == 'L')
			s[j] = '1';

	}
	return (s);
}
