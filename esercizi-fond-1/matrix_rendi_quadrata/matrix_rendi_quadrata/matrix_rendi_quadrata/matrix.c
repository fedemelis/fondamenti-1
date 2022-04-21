#include "matrix.h"

struct matrix* mat_rendiquadrata(const struct matrix* a) {

	int quante = 0;
	int contatore = 0;
	struct matrix* m = malloc(sizeof(struct matrix));
	

	if (a->rows > a->cols)
	{
		m->rows = a->rows;
		m->cols = a->rows;
		quante = a->rows - a->cols;
		
		for (size_t i = 0; i < a->rows; i++)
		{
			for (size_t k = 0; k < quante; k++)
			{
				contatore += a->cols;
				
			}
		}
	}

	if (a->cols > a->rows)
	{
		quante = a->cols - a->rows;
	}

}