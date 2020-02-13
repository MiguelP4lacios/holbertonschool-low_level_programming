#include "holberton.h"
/**
  * _isupper - say me uppercase character
  * @c: contains the lowercase letter
  * Return: Returns 1 if c is uppercase, returns 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
