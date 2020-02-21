#include "holberton.h"
#include <stdio.h>
/**
  *  rot13-  encodes a string into rot13.
  * @s: string to convert
  * Return: s econdes
  */
char *rot13(char *s)
{
	int j, i;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWZabcdefghijklmnopqrstuvwz";
	char output[] = "NOPQRSTUVWZABCDEFGHIJKLMnopqrstuvwzabcdefghijklm";


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[j] == input[i])
			{
				s[j] = output[i];
				break;
			}
		}

	}
	return (s);
}
