#include "holberton.h"
#include <stdio.h>
/**
  * rot13-  encodes a string into rot13.
  * @r: string to convert
  * Return: s econdes
  */
char *rot13(char *r)
{
	int j, i;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (j = 0; r[j] != '\0'; j++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (r[j] == input[i])
			{
				r[j] = output[i];
				break;
			}
		}

	}
	return (r);
}
