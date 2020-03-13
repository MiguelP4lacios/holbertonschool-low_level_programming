#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: number of arg.
  * @...: opcional arg.
  *
  * Return: add.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_arg;
	unsigned int add = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(my_arg, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(my_arg, int);
	}
	va_end(my_arg);
	return (add);
}
