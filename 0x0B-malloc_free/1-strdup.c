#include <stdlib.h>
/**
  * _strdup - unction that returns a pointer to a newly
  * allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: character
  * Return: (A)
  */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *A;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	A =  malloc(i + 1);
	if (A == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		A[j] = str[j];
	A[j] = '\0';
	return (A);
}
