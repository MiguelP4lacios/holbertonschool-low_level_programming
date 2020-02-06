#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char lt;

	for (i = '0' ; i <= '9' ; i++)
		putchar (i);
	for (lt = 'a' ; lt <= 'f' ; lt++)
		putchar (lt);
	putchar ('\n');
	return (0);
}
