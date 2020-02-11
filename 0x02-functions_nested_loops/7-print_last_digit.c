#include "holberton.h"
/**
  * print_last_digit - say me the last digit of a number.
  * @n : contains the integrate.
  * Return: lastD
  */
int print_last_digit(int n)
{
	int lastD = n % 10;

	if (lastD < 0)
	{
		lastD *= -1;
	}
	_putchar('0' + lastD);
	return (lastD);
}
