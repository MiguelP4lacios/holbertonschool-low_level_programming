#include <stdio.h>
/**
  * main - print program name
  * @argc: number argument
  * @argv: pointer of argument
  * Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
