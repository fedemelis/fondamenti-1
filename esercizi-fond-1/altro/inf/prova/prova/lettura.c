#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdio.h>
#include <stdint.h>

/*int* leggiinteri(const char* filename, size_t* size)
{
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	uint32_t n;
	size_t num_read;
	num_read = fread(&n, sizeof n, 1, f);

	if (num_read != 1) {
		fclose(f);
		return NULL;
	}

	int *x = malloc(n * sizeof(int));
	if (x == NULL) {
		fclose(f);
		return NULL;
	}

	num_read = fread(x, sizeof(int), n, f);
	if (num_read != n) {
		free(x);
		fclose(f);
		return NULL;
	}

	fclose(f);
	*size = n;
	return x;
}*/

int* leggiinteri(const char* filename, size_t* size)
{

	int* x = NULL;
	FILE* f = fopen(filename, "rb");
	if (f != NULL) {
		uint32_t n;
		size_t num_read;
		num_read = fread(&n)
	}

}