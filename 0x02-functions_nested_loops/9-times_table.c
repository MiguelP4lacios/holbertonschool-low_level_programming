#include "holberton.h"
/**
 * times_table - say me the the 9 times table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int table[10] = {0,0,0,0,0,0,0,0,0,0} ;
	int i; 
	int r;

	for (i = '0' ; i < '9' ; i++)
	{
		_putchar(table[0] + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (i = '0' ; i < '9'; i++)
	{
		
		_putchar(table[0] + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(table[1] += 1);
		_putchar(',');
		_putchar(' ');
		_putchar(table[2] += 2);
		_putchar(',');
		_putchar(' ');
		_putchar(table[3] += 3);
		_putchar(',');
		_putchar(' ');
		_putchar(table[4] += 4);
		_putchar(',');
		_putchar(' ');
		_putchar(table[5] += 5);
		_putchar(',');
		_putchar(' ');
		_putchar(table[6] += 6);
		_putchar(',');
		_putchar(' ');
		_putchar(table[7] += 7 );
		_putchar(',');
		_putchar(' ');
		_putchar(table[8] += 8);
		_putchar(',');
		_putchar(' ');
		_putchar(table[9] += 9);
		_putchar('\n');
	}
	

}
