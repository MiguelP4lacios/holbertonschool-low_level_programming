#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	srand(time(NULL));
	int x;
	int cifras = 8;
	char min[] = "abcdefghijklmnopqrstuvwxyz";
	char may[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char num[] = "0123456789";
	char aleatorio[cifras+1];

	for (x = 0; x < cifras; x++) 
	{
		int eleccion = (int)(rand() % 3 + 1);

		switch ( eleccion ) 
		{
			case 1:
				aleatorio[x] = min[rand() % 25 + 1];
				break;
			case 2:
				aleatorio[x] = may[rand() % 25 + 1];
				break;
			case 3:
				aleatorio[x] = num[rand() % 9 + 1];
				break;
		}
		aleatorio[cifras] = '\0';
	}
	printf("%s\n", aleatorio);
	return (0);
}
