#include "rle.h"

bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {
	unsigned char c = 0;
	char val = 0;
	int n = 0;

	FILE* fin = fopen(nomefilein, "rb");
	if (fin == NULL)
	{
		return false;
	}

	FILE* fout = fopen(nomefileout, "wb+");
	if (fout == NULL)
	{
		fclose(fin);
		return false;
	}

	while (1)
	{
		n = fread(&c, 1, 1, fin);
		if (n != 1)
		{
			break;
		}
		n = fread(&val, 1, 1, fin);
		if (n != 1)
		{
			break;
		}
		for (size_t i = 0; i < (int)c + 1; i++)
		{
			fwrite(&val, 1, 1, fout);
		}
	}

	fclose(fin);
	fclose(fout);
	return true;
}