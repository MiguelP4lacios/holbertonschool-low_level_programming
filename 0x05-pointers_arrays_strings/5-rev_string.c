#include "holberton.h"
/**
  * rev_string - reverses a string.
  * @s: contian string to reverse
  * Return: nothing
  */
void rev_string(char *s)
{
	int i, k = 0; /*tamaño de la cadena de caracteres*/
	int j;
	int aux[10];

	while (s[i] != '\0')
	{
		aux[i] = s[i];
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		s[j] = aux[k];
		k++;
	}
}
