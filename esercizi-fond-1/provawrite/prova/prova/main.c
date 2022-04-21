#include <stdio.h>
#include <string.h>

int main(void) {

	FILE* f = fopen("file.txt", "w+b");
	char k[25] = {"ciao io sono federico\n"};

	/*fwrite(i, sizeof(char), strlen(i), f);
	fseek(f, 3, SEEK_CUR);
	fwrite(i, sizeof(char), strlen(i), f);
	rewind(f);
	fwrite(i, sizeof(char), strlen(i), f);
	long a = ftell(f);*/

	/*for (size_t i = 0; i < strlen(k); i++)
	{
		fputc(k[i], f);
	}*/

	fputs(k, f);

	fclose(f);

}