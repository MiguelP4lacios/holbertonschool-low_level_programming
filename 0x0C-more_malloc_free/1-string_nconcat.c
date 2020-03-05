#include <stdlib.h>
int str_len(char *s);
/**
  * string_concat - concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * @n: n for string 2
  * Return: (A)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;
	int i = 0;
	unsigned int j;
	int t = str_len(s1) + n + 1;

	S = malloc(sizeof(char) * t);
	if (S == NULL)
		return (NULL);
	for (j = 0; s1 && s1[j] != '\0'; j++)
	{
		S[i] = s1[j];
		i++;
	}
	for (j = 0; s2 && j < n; j++)
	{
		S[i] = s2[j];
		i++;
	}
	S[i] = '\0';
	return (S);
}
/**
  * str_len - size string
  * @s: string
  * Return: (len)
  */
int str_len(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
	{
		len++;
	}
	return (len);
}
