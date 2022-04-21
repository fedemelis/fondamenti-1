#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
ongi elemento della nostra matrice è double

per una matrice 2*3 necessitiamo di 6 double

rows = 2
cols = 3

       0     1     2	
0   | 3.2 | 27  | 4  |
1   |  1  | 5.9 | -2 |


   |3.2|27 | 4 | 1 |5.9|-2 | matrice per righe
i:   0   1	 2   3   4   5

(r,c) -> i : i = r*cols + c

	     r : r = i / cols
		 c : c = i % cols

*/

typedef struct matrix
{
	size_t rows, cols;
	double* data;
} matrix;

matrix *matrix_construct(matrix *m, size_t rows, size_t cols) {

	m->rows = rows;
	m->cols = cols;
	m->data = malloc(rows * cols * sizeof(double));
	return m;

}

matrix* matrix_destruct(matrix* m) {

	free(m->data);
	return m;

}

struct matrix* new_matrix(size_t rows, size_t cols) {
	struct matrix* m;
	m = malloc(sizeof(struct matrix));
	matrix_construct(m, 2, 4);
	return m;
}

void delete_matrix(struct matrix* m) {
	matrix_destruct(m);
	free(m);
}

double matrix_get(const struct  matrix *m, size_t r, size_t c)
{
	return m->data[r * m->cols + c];
};

void matrix_print(const struct matrix* m, FILE* f) {
	for (size_t r = 0; r < m->rows; ++r)
	{
		for (size_t c = 0; c < m->cols; ++c)
		{
			fprintf(stdout, "%.2f\t", matrix_get(m, r, c));
		}
		fprintf(stdout, "\n");
	}
}



int main(void) {

	struct matrix* m = new_matrix(2, 4);
	m->data[0] = 3.2;
	m->data[1] = 27;
	m->data[2] = 4;
	m->data[3] = 7;
	m->data[4] = 1;
	m->data[5] = 5.9;
	m->data[6] = -2;
	m->data[7] = 8;

	FILE* f = fopen("matrice.txt", "w");
	matrix_print(m, f);
	fclose(f);
	//matrix_print(m, stdout);

	delete_matrix(m);

	return EXIT_SUCCESS;

}