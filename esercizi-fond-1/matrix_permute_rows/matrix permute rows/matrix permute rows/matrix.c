#include "matrix.h"

struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p) {

	size_t contatore = 0;

	struct matrix* mat = malloc(sizeof(struct matrix));
	mat->rows = m->rows;
	mat->cols = m->cols;
    mat->data = malloc((m->rows * m->cols) * sizeof(double));

	for (size_t i = 0; i < m->rows; i++)
	{
		size_t t = p[i] * m->cols;

		for (size_t k = 0; k < m->cols; k++)
		{
			mat->data[contatore] = m->data[t];
			contatore++;
			t++;
		}
	}
	return mat;
}