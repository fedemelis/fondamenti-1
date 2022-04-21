#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int* leggidouble(const char* filename, size_t* size) {

	double* x = NULL;
	FILE* f = fopen(filename, "rt");

	if (f) {

		size_t n = 0;

		while (1)
		{
			double d;
			int res = fscanf(f, "%lf", &d);
			
			if (res != 1)
			{
				break;
			}

			rewind(f);
			++n;
			x = malloc(n * sizeof(double));
			for (size_t i = 0; i < n; ++i)
			{
				fscanf(f, "%lf", &x[i]);
			}
			x[n - 1] - d;

		}
		*size = n;
		fclose(f);
	}
	return x;
}

