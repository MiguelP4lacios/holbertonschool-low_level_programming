#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ASCII;

	for (ASCII = 48 ; ASCII <= 57 ; ASCII++)
	{
		putchar (ASCII);
		if (ASCII != 57)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar('\n');
	return (0);
}
