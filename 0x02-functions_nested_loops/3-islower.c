#include "holberton.h"
/**
  * _islower - say me lowercase character
  * @c: contains the lowercase letter
  * Return: Returns 1 if c is lowercase, returns 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
