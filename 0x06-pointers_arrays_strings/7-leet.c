#include "holberton.h"
#include <stdio.h>
/**
  * leet -  encodes a string into 1337.
  * @s: string to convert
  * Return: s econdes
  */
char *leet(char *s)
{
	int j, i;

	char array_leet[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[j] == array_leet[i])
			{
				s[j] = num[i];
			}
		}

	}
	return (s);
}
