#define _CRT_SECURE_NO_WARNINGS
#include "scrittura.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int scrivimaiuscolo(const char* filename) {

	int retval = 0;
	FILE* f = fopen(filename, "r");
	if (f)
	{
		while (true)
		{
			char c;
			int res = fscanf(f, "%c", &c);
			if (res != 1)
			{
				break;
			}
			c = toupper(c);
			printf("%c", c);
		}
		fclose(f);
		retval = 1;
	}
	return retval;

}

