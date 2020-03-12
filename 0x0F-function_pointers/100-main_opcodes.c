#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  *main - prints the opcodes of its own main function.
  *@argc: number argument
  *@argv: pointer of argument
  *Return: 0
  */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
