#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line.
  * @n: number of arg.
  * @...: opcional arg.
  * @separator: ", "
  *
  * Return: Nothing.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_arg;
	unsigned int i;
	int integer;

	if (separator == NULL)
	{
		separator = "";

	}
	va_start(my_arg, n);
	for (i = 0; i < n; i++)
	{
		integer = va_arg(my_arg, int);
		if (!(i == n - 1))
		{
			printf("%d%s", integer, separator);
		}
		else
		{
			printf("%d", integer);
		}
	}
	putchar('\n');
	va_end(my_arg);
}
