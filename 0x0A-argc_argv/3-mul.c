#include <stdio.h>
#include <stdlib.h>
/**
  * main -  multiplies two numbers..
  * @argc: number argument
  * @argv: pointer of argument
  * Return: 0 or 1(Error)
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
