#include <stdlib.h>
#include <string.h>

unsigned int* tartaglia(unsigned int* v, size_t n) {

	if (n == 0)
	{
		unsigned int* newVect = malloc(1 * sizeof(unsigned int));
		newVect[0] = 1;
		return newVect;
	}
	if (n == 1)
	{
		unsigned int* newVect = malloc(2 * sizeof(unsigned int));
		newVect[0] = 1;
		newVect[1] = 1;
		return newVect;
	}

	unsigned int* newVect= malloc((n + 2) * sizeof(unsigned int));

	for (size_t i = 0; i < n+1; i++)
	{
		if (i == 0)
		{
			newVect[i] = 1;
		}
		else if (i == n)
		{
			newVect[i] = 1;
		}
		else
		{
			newVect[i] = (v[i] + v[i - 1]);
		}
	}
	return newVect;
}


int main(void) {

	unsigned int v[] = { 1, 1};

	tartaglia(v, 2);
}