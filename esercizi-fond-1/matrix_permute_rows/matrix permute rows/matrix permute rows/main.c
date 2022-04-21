#include "matrix.h"


int main(void) {

	double d[] = { 1, 2, 3, 4 };

	struct matrix m = { 2, 2, d };

	size_t p[] = {0, 1};

	mat_permute_rows(&m, p);
	

}