#include <stdlib.h>

size_t find_first_partition(const int* seq, size_t n) {

	int quantiPrima = 0;
	int quantiDopo = 0;

	int contatore = 0;

	if (seq == NULL || n == 0)
	{
		return 0;
	}

	for (size_t i = 0; i < n; ++i)
	{
		quantiPrima = i;
		quantiDopo = n - i;

		for (size_t j = (i+1); j < n; j++)
		{
			if (seq[i] < seq[j])
			{
				contatore++;
			}
		}
		for (size_t k = 0; k < quantiPrima; k++)
		{
			if (seq[i] > seq[k])
			{
				contatore++;
			}
		}

		if (contatore == (n-1))
		{
			return i;
		}
		else
		{
			quantiDopo = 0;
			quantiPrima = 0;
			contatore = 0;
		}

	}
}




int main(void) {


	int ciao[] = { 1, 2, 4, 3, 6, 8, 10, 7, 9 };

	int res = find_first_partition(ciao, 9);

}