#include "cerca.h"

int cerca_primo(const char* s, char c) {
	unsigned int contatore;
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return i;
		}
	}
	return -1;
}