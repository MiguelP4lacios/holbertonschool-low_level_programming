#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  *main - main function
  *@argc: number argument
  *@argv: pointer of argument
  *Return: 0
  */
int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+"))
			&& strcmp(argv[2], "-")
			&& strcmp(argv[2], "/")
			&& strcmp(argv[2], "*")
			&& strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
	return (0);
}
