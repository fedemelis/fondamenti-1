#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

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
	uint32_t finale = 0;
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
		while ((v[i]/2) > div)
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
					divisori = realloc(divisori, (size+1) * sizeof(int));
					divisori[div];
				}
				contatore = 0;
			}
			div+=2;
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

int main(void) {

	uint32_t v[] = { 100, 2000, 30000, 400000, 5 };
	vector_MCD(v, 5);

}