#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	int long numero = 612852475143;
	int factores[1000];
	int i_factores = 0;
	int max;
	int i = 2; /* se empeiza a verificar todos los factores desde 2. */

	while (i <= numero)
	{
		if ((numero % i) == 0)  /* implica que numero es factor de i.*/
		{
			factores[i_factores] = i;
			numero = numero / i;/*Procesamos la variable "numero".*/
			i_factores++;
			continue;
		}
		i++;
	}
	i = 0;
	while (i < i_factores)
	{
		if (factores[i] > max)
		{
			max = factores[i];
		}
		i++;
	}
	printf("%d\n", max);
	return (0);
}
