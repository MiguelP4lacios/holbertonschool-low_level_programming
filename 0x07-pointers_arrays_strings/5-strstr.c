#include "holberton.h"
/**
  * _strstr - locates a substring.
  * @haystack: C string to be scanned.
  * @needle: C string containing the sequence of characters to match.
  * Return: ()
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}
