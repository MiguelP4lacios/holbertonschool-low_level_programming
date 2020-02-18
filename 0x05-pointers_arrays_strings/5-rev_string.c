#include "holberton.h"
/**
  * rev_string - reverses a string.
  * @s: contian string to reverse
  * Return: nothig
  */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char *aux_1;
	char *aux_2;
	char c;

	aux_1 = s;
	aux_2 = s;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		aux_2++;
	}
	for (j = 0; j < i / 2; j++)
	{
		c = *aux_2;
		*aux_2 = *aux_1;
		*aux_1 = c;
		aux_1++;
		aux_2--;
	}
}
