#include <stdlib.h>

unsigned int irpef(unsigned int stipendio, unsigned int* scaglioni, unsigned int* aliquote, size_t n) {

	unsigned int totale = 0;

	if (stipendio != NULL || scaglioni != NULL || aliquote != NULL)
	{
		for (size_t i = 0; i < n; i++)
		{
			if (n == 1)
			{
				totale = (stipendio / 100) * aliquote[0];
			}
			else if ((stipendio > scaglioni[i] && stipendio < scaglioni[i + 1]))
			{
				if ((n-1) != i)
				{
					totale += ((stipendio - scaglioni[i]) / 100) * aliquote[i];
				}
				
			}
			else if ((stipendio > scaglioni[i] && stipendio >= scaglioni[i + 1]))
			{
				if (n-1 == i)
				{
					totale += ((stipendio - scaglioni[i]) / 100) * aliquote[i];
				}
				else
				{
					totale += ((scaglioni[i + 1] - scaglioni[i]) / 100) * aliquote[i];
				}
				
			}
		}
		return totale;
	}
}


int main(void) {

	unsigned int scaglioni[] = { 0, 15000, 28000, 55000, 75000 };
	unsigned int aliquote[] = { 23, 27, 38, 41, 43 };

	irpef(100000, scaglioni, aliquote, 5);

}