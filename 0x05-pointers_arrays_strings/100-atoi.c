#include "holberton.h"

/**
  * _atoi - convert a string to an int.
  *
  * @s: element of the string.
  *
  * Return: an integer or zero.
  */
int _atoi(char *s)
{
	int i;
	unsigned int in;
	int sign;
	
	i = 0;
	in = 0;
	sign = 0;
	while (s[i] > '9' || s[i] < '0')
	{
		if (s[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		in = in * 10 + (s[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
	{
		in = -1 * in;
		return (in);
	}
	if (in == 0)
		return (0);
	return  (in);
}
