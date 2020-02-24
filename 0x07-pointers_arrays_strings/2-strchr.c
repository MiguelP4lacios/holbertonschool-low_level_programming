#include "holberton.h"
/**
  * _strchar - locates a character in a string.
  * @s: C string.
  * @c: Character to be located..
  * Return: ()
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
