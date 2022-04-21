#include <stdlib.h>

int* rotate(const int* vec, size_t len, size_t r) {

	int* ris = malloc(len * sizeof(int));
	int index = 0;

	for (size_t i = 0; i < len; i++)
	{
		if (r <= 3)
		{
			ris[i] = vec[r];
			r++;
		}
		else
		{
			r = 
			ris[i] = vec[r];
			r++;
		}
	}

	return ris;

}

int main(void) {

	int arr[] = { 1, 2, 3, 4 };
	rotate(arr, 4, 5);

}