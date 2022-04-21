#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t contanumeri(const char* nomefile) {

	size_t ris = 0;
	FILE* f = fopen(nomefile, "r");
	char c = 0;
	while (1)
	{
		c = fgetc(f);
		if (c != NULL && c != EOF)
		{
			if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
			{
				ris++;
			}
		}
		else 
		{
			fclose(f);
			return ris;
		}
		
	}
	fclose(f);
	return ris;
}

int main(void) {

	contanumeri("file1.txt");

}