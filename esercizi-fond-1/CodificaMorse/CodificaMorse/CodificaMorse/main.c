#include <string.h>
#include <stdlib.h>

char* codifica_morse(const char* testo) {

	char* res = malloc(sizeof(char));
	size_t quantoSpazio = 0;
	int contatore = 0;

	if (testo == NULL)
	{
		free(res);
		return NULL;
	}

	for (size_t i = 0; i < strlen(testo); i++)
	{
		if (testo[i] == 'A')
		{
			quantoSpazio += 3;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'B')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'C')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'D')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'E')
		{
			quantoSpazio += 2;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'F')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'G')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'H')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'I')
		{
			quantoSpazio += 3;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;

		}
		else if (testo[i] == 'J')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'K')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'L')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'M')
		{
			quantoSpazio += 3;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'N')
		{
			quantoSpazio += 3;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'O')
		{
			quantoSpazio += 4;
			res = res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'P')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'Q')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'R')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'S')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'T')
		{
			quantoSpazio += 2;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'U')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'V')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'W')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'X')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'Y')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == 'Z')
		{
			quantoSpazio += 5;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '_';
			contatore++;
			res[contatore] = '_';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = '.';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == ' ')
		{
			quantoSpazio += 4;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '/';
			contatore++;
			res[contatore] = ' ';
			contatore++;
		}
		else if (testo[i] == '.')
		{
			quantoSpazio += 2;
			res = realloc(res, sizeof(char) + quantoSpazio);
			res[contatore] = '.';
			contatore++;
		}
	}
	res[contatore-1] = 0;
	return res;
}

int main(void) {

	codifica_morse("QUI ABBIAMO QUATTRO PAROLE");

}