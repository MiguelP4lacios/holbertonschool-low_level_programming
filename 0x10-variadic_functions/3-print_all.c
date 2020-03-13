#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_all - prints strings, followed by a new line.
  * @format: "cifs"
  * @...: opcional arg.
  *
  * Return: Nothing.
  */
void print_all(const char * const format, ...)
{
	va_list my_arg;
	unsigned int i = 0;
	char *S;

	va_start(my_arg, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(my_arg, int));
				break;
			case 'i':
				printf("%d", va_arg(my_arg, int));
				break;
			case 'f':
				printf("%f", va_arg(my_arg, double ));
				break;
			case 's':
				S = va_arg(my_arg, char*);
				if (S == NULL)
				{
					S = "(nil)";
				}
				printf("%s", S);
				break;
			default:
				continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(my_arg);
}
