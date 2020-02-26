#include "holberton.h"
/**
  * prime - funtion aux
  * @n: number
  * @div: Verifier for prime numbers
  * Return: 1 o 0 if is prime respectively.
  */
int prime(int n, int div)
{
	if (n == div)
		return (1);
	else if ((n % div) != 0)
		return (prime(n, div + 2));
	else
		return (0);
}
/**
  * is_prime_number - It tells me if a number is prime
  * @n: number
  * Return: 1 if is true and 0 if is false
  */
int is_prime_number(int n)
{
	if ((n == 1) || (n < 0) || (n == 2) || (n == 3))
		return (0);
	else if ((n % 2) == 0)
		return (0);
	return (prime(n, 3));
}
