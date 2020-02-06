#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar (alphabet);
	}
	for (ALPHABET = 'A' ; ALPHABET <= 'Z' ; ALPHABET++)
	{
		putchar (ALPHABET);
	}
	putchar ('\n');
	return (0);
}
