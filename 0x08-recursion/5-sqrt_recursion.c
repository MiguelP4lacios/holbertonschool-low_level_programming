#include "holberton.h"
/**
  * _sqrt - checks for natural square root of a number
  * @n: number for checks, if is natural square root
  * @i: variable used to test for whether n has natural square root
  * Return: natural square root of n, if none return -1
  */
int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n:number
  * Return: natural square root number
  */
int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
