#include "holberton.h"
/**
  * _strlen - returns the length of a string.
  * @j: string
  * Return:length;
  */

int _strlen(char *j)
{
	if (*j == '\0')
		return (0);
	return (1 + _strlen(j + 1));
}
/**
  * palindrome - It tells me if a string is palindrome.
  * @n: string
  * @start: value of start
  * @end: value of end
  * Return: 1 o 0 respectively if is palindrome or no.
  */
int palindrome(char *n, int start, int end)
{
	if (start > end)
		return (1);
	else if (n[start] == n[end])
		return (palindrome(n, start + 1, end - 1));
	return (0);
}
/**
  * is_palindrome - if a string is a palindrome.
  * @s: string
  * Return: 1 if is true and 0 if is false
  */
int is_palindrome(char *s)
{
	int end;

	end = _strlen(s) - 1;
	return (palindrome(s, 0, end));
}
