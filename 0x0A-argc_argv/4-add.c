#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds positive numbers.
  * @argc: number argument
  * @argv: pointer of argument
  * Return: 0 or 1(Error)
  */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(*(argv + i) + j) != '\0'; j++)
				if (!(isdigit(*(*(argv + i) + j))))
				{
					printf("Error\n");
					return (1);
				}
			add += atoi(*(argv + i));
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", add);
	return (0);
}
