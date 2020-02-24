#include "holberton.h"
/**
  * _strchr - locates a character in a string.
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
	if (*s == c)
		return (s);
	return ('\0');
}
