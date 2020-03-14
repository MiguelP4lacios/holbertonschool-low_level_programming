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

	if (separator == NULL)
	{
		return;

	}
	va_start(my_arg, n);
	for (i = 0; i < n; i++)
	{
		if (!(i == n - 1))
		{
			printf("%d%s", va_arg(my_arg, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(my_arg, int));
		}
	}
	va_end(my_arg);
}
