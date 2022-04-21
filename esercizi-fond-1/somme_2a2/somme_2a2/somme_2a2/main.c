#include <stdlib.h>
#include <stdint.h>

extern uint32_t* somme_2a2(uint32_t* vett, size_t size) {

	uint32_t *puntatore = malloc((size / 2) * sizeof(uint32_t));

	if (vett != NULL)
	{
		size_t c = 0;
		size_t i = 0;
		
		while ((c+1) < size)
		{
			puntatore[i] = vett[c] + vett[c + 1];
			c += 2;
			i += 1;
		}
		return puntatore;
	}
	else {
		free(puntatore);
		return NULL;
	}
}

int main(void) {

	uint32_t v[] = { 1, 2, 3, 4, 5, 6};
	size_t dimensione = 6;

	somme_2a2(v, dimensione);

}