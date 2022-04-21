#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int* leggiinteri2(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	size_t n = 0;
	while (true)
	{
		int i;
		size_t num_read;

		num_read = fread(&i, sizeof i, 1, f);

		if (num_read != 1) {
			break;
		}
		++n;
	}

	rewind(f);

	int* x = malloc(n * sizeof(int));
	fread(x, sizeof(int), n, f);
	*size = n;
	fclose(f);
	return x;

}

