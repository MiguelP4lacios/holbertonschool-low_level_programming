#include "holberton.h"
/**
  * _pow_recursion - eturns the value of x raised to the power of y
  * @x:number
  * @y:power
  * Return: product
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
