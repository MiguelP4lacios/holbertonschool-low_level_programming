#include <stdlib.h>
#include <stdio.h>
/**
  * argstostr - concatenates all the arguments of your program
  * @ac: number argument
  * @av: pointer of argument
  * Return: p or NULL
  */
char *argstostr(int ac, char **av)
{
	int i, j, len, p_len;
	char *p;

	len = 0;
	p_len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			len++;
		}
	}
	p = malloc(sizeof(char) * (ac + len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			p[p_len] = *(*(av + i) + j);
			p_len++;
		}
		p[p_len] = '\n';
		p_len++;
	}
	p[p_len] = '\0';
	return (p);
}

