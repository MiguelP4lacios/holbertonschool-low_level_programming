#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'a' ; Alphabet <= 'z' ; Alphabet++)
		if (Alphabet == 'q' || Alphabet == 'e')
			continue;
		else
			putchar (Alphabet);
	putchar ('\n');
	return (0);
}
