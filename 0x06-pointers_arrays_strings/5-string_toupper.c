#include "holberton.h"
#include <ctype.h>
/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
  * @a: contian array to reverse.
  * @n: size of the array.
  * Return: nothig
  */
char *string_toupper(char *s)
{
	int j;

	for (j = 0;s[j] != '\0'; j++)
	{
		s[j] = toupper(s[j]);

	}
	return (s);
}
