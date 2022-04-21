#include <stdint.h>
#include <stdio.h>

extern void print_table(char** colnames, uint8_t ncols, uint8_t nrows) {
	int dim = 0;
	for (size_t i = 0; i < ncols; i++)
	{
		printf("%c", "|");
		for (size_t i = 0; i < strlen(colnames[dim]); i++)
		{

			dim++;
		}
	}
}