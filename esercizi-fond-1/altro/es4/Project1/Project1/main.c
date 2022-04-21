#include "lettura.h"

int main(void) {

	int *v;
	size_t n;

	v = leggidouble("dati1.bin", &n); 
	free(v);

	return 0;
}