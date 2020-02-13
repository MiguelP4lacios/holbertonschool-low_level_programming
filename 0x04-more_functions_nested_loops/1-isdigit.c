#include "holberton.h"
/**
  * _isdigit - that checks for a digit (0 through 9).
  * @c: contains the value a checks
  * Return: Returns 1 if c is a digit, returns 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
