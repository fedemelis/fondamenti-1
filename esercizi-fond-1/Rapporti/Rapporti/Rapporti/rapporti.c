#include "rapporti.h"

struct rapporto* leggi_rapporti(const char* filename, uint16_t* n) {

	FILE* f = fopen("rapporto1.bit", "rb");

	int quanti = 0;

	if (f != NULL)
	{
		fscanf(f, "%d", quanti);
	}
	else
	{
		return NULL;
	}

}