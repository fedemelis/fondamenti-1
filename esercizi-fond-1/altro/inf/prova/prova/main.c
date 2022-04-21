#include "lettura.h"

int main(void) {

	int* v;
	size_t n;

	v = leggiinteri("dati1.bin", &n);
	free(v);

	return 0;
}