#include <stdio.h>

extern void stampa_tavola_pitagorica(FILE* f, unsigned int n) {

	int r = 1, c = 1;
	int val = 0;

	if (f == NULL || n == 0)
	{
		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			val = r * c;
			fprintf(f, "%d", val);
			fputc('\t', f);
			c++;
		}
		fputc('\n', f);
		c = 1;
		r++;
	}

}

int main(void) {



}