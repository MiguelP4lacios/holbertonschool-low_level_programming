#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins.
  * @argc: number argument
  * @argv: pointer of argument
  * Return: 0 or 1(Error)
  */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int monto = atoi(argv[1]);

	if (argc < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (monto > 0)
		{
			if (monto >= 25)
				monto -= 25;
			else if (monto >= 10)
				monto -= 10;
			else if (monto >= 5)
				monto -= 5;
			else if (monto >= 2)
				monto -= 2;
			else
				monto -= 1;
			i++;
		}
		printf("%d\n", i);
	}
	return (0);
}

