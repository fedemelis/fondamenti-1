#include "string.h"

void elimina_consecutivi(char* str) {

	char* tmp = malloc(1);
	size_t quanti = 0;
	char confronto = "";
	size_t contatore = 0;
	size_t contatoreNewVec = 0;

	if (str == NULL)
	{
		free(tmp);
		return;
	}

	for (size_t i = 0; i < strlen(str); i++)
	{
		confronto = str[i];
		contatore = i;
		while (str[contatore] == confronto)
		{
			contatore++;
			quanti++;
		}
		contatore = 0;
		tmp = realloc(tmp, (contatoreNewVec + 1));
		tmp[contatoreNewVec] = confronto;
		contatoreNewVec++;
		i += (quanti - 1);
		quanti = 0;
	}

	tmp[contatoreNewVec] = 0;


	str = realloc(str, sizeof(tmp));

	for (int k = 0; k < sizeof(tmp); k++)
	{
		str[k] = 0;
	}

	for (int j = 0; j < sizeof(tmp); j++)
	{
		str[j] = tmp[j];
	}

	//free(tmp);
}