#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - prints strings, followed by a new line.
  * @n: number of arg.
  * @...: opcional arg.
  * @separator: ", "
  *
  * Return: Nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_arg;
	unsigned int i;
	char *S;

	if (n == 0)
		return;
	if (separator == NULL)
		return;
	va_start(my_arg, n);
	for (i = 0; i < n; i++)
	{
		S = va_arg(my_arg, char *);
		if (!(i == n - 1))
		{
			if (S == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", S, separator);
		}
		else
		{
			if (S == NULL)
				printf("(nil)\n");
			else
				printf("%s\n", S);
		}

	}
	va_end(my_arg);
}
