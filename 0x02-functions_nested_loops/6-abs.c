#include "holberton.h"
/**
  * _abs - say me the absolute value of an integer.
  * @n: contains the integrate.
  * Return: value n
  */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}

}
