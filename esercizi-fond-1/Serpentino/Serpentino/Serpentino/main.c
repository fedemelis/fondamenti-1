#include <stdlib.h>
#include <string.h>

char* serpentino_encode(const char* s) {

	size_t size = 1;
	size_t contatore = 0;

	char* res = malloc(1);

	if (s != NULL)
	{
		for (size_t i = 0; i < strlen(s); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			{
				size += 3;
				res = realloc(res, size);
				res[contatore] = s[i];
				contatore++;
				res[contatore] = 's';
				contatore++;
				res[contatore] = s[i];
				contatore++;
			}
			else
			{
				size += 1;
				res = realloc(res, size);
				res[contatore] = s[i];
				contatore++;
			}
		}
		res[contatore] = 0;
		return res;
	}
	else
	{
		free(res);
		return NULL;
	}

}

int main(void) {

	serpentino_encode("marco");

}