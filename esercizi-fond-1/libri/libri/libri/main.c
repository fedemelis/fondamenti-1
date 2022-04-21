#include "libri.c"

int main(void) {

	FILE *f = fopen("libri1.txt", "r");
	read_libri(f, 3);

	fclose(f);

}