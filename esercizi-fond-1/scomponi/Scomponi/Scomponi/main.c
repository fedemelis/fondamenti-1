#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stampa_scomposizione(unsigned int n) {
	if ( n == 0)
	{
		printf("%d", 0);
		return;
	}
	if (n == 1)
	{
		printf("%d", 1);
		return;
	}

	unsigned int newDivisore = 2;
	int dim = 1;
	int quanteVolte = 0;
	size_t contatore = 0;
	size_t contatoreV = 0;

	unsigned int* divisori = malloc(sizeof (unsigned int));

	while (n != 1)
	{
		if (n % newDivisore == 0)
		{
			n = n / newDivisore;
			divisori = realloc(divisori, (dim * sizeof(unsigned int)));
			divisori[contatore] = newDivisore;
			contatore++;
			dim++;
		}
		else
		{
			newDivisore++;
		}
	}

	int* p = malloc(sizeof(unsigned int) * dim);
	int *k = malloc(sizeof(int));


	for (size_t i = 0; i < sizeof(divisori)+1; i++)
	{
		for (size_t j = 0; j < sizeof(divisori)+1; j++)
		{
			if (divisori[i] == divisori[j] && p[j] != 1)
			{
				quanteVolte++;
				p[j] = 1;
			}
		}
		if (quanteVolte >= 1)
		{
			k = realloc(k, (contatoreV + 3) * sizeof(int));
			k[contatoreV] = divisori[i];
			k[contatoreV +1] = quanteVolte;
			contatoreV += 2;
			quanteVolte = 0;
		}
		
	}
	k[contatoreV] = 0;

	for (size_t i = 0; i < contatoreV; i+=2)
	{
		if (k[i+1] > 1)
		{
			printf("%d^%d", k[i], k[i + 1]);
		}
		else
		{
			printf("%d", k[i]);
		}
		if (i+2 < contatoreV)
		{
			printf(" * ");
		}
	}
}

int main(void) {

	stampa_scomposizione(2147483647);

}