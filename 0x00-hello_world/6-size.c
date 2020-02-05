#include <stdio.h>

/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int _Char = sizeof(char);
	int _Int = sizeof(int);
	int _long = sizeof(long);
	int _longLong = sizeof(long long);
	int _float = sizeof(float);

	printf("Size of a char: %d byte(s)\n", _Char);
	printf("Size of an int: %d byte(s)\n", _Int);
	printf("Size of a long int: %d byte(s)\n", _long);
	printf("Size of a long long int: %d byte(s)\n", _longLong);
	printf("Size of a float: %d byte(s)\n", _float);
	return (0);
}
