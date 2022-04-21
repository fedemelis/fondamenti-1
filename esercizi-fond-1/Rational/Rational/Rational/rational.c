#include "rational.h"

bool primo(unsigned int val)
{
	if (val < 2)
	{
		return true;
	}
	for (unsigned int i = 2; i < 100000000 && i * i <= val; i++)
	{
		if (val % i == 0)
		{
			return false;
		}
	}
	return true;
}

uint32_t vector_MCD(const uint32_t* v, size_t n) {

	int div = 3;
	int contatore = 0;
	int divisibilePer2 = 0;
	uint32_t finale = 1;
	size_t size = 1;
	int* divisori = malloc(size * sizeof(int));
	divisori[0] = 1;
	if (v == NULL || n == NULL || n == 0)
	{
		return 0;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] == 0)
		{
			return 0;
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		v[i] % 2 == 0;
		divisibilePer2++;
	}
	if (divisibilePer2 == n)
	{
		divisori = realloc(divisori, 2 * sizeof(int));
		divisori[1] = 2;
	}

	for (size_t i = 0; i < n; i++)
	{
		while ((v[i] / 2) > div)
		{
			if ((v[i] % div) == 0)
			{
				for (size_t i = 0; i < n; i++)
				{
					if ((v[i] % div) == 0)
					{
						contatore++;
					}
				}
				if (contatore == n)
				{
					size++;
					divisori = realloc(divisori, (size + 1) * sizeof(int));
					divisori[div];
				}
				contatore = 0;
			}
			div += 2;
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		if (primo(v[i]))
		{
			finale *= divisori[i];
		}
	}
	free(divisori);
	return finale;
}


void rational_sum(struct rational* sum, const struct rational* first, const struct rational* second) {

	sum->den = first->den * second->den;
	sum->num = (first->num * second->den) + (first->den * second->num);
	uint32_t dennum[2] = { sum->num, sum->den };
	uint32_t MCD = vector_MCD(dennum, 2);
	if (MCD != 0)
	{
		sum->den /= MCD;
		sum->num /= MCD;
	}
}