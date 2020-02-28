#include <stdio.h>
/**
  * main - prints all arguments it receives.
  * @argc: number argument
  * @argv: pointer of argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
