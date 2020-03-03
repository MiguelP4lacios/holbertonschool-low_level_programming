#include <stdlib.h>
/**
  * str_len - size string
  * @s: string
  * Return: (len)
  */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0' && s)
		len++;
	return (len);
}
/**
  * str_concat - concatenates two strings.
  * @s1: string
  * @s2: string
  * Return: (A)
  */
char *str_concat(char *s1, char *s2)
{
	char *A;
	int i = 0;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	int t = str_len(s1) + str_len(s2) + 1;

	A = malloc(sizeof(char) * t);
	if (A == NULL)
		return (NULL);
	for (j = 0; s1 && s1[j] != '\0'; j++)
	{
		A[i] = s1[i];
		i++;
	}
	for (j = 0; s2 && s2[j] != '\0'; j++)
	{
		A[i] = s2[j];
		i++;
	}
	A[i] = '\0';
	return (A);


}
