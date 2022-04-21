#include <string.h>
#include <stdlib.h>

char* change_font(const char* s) {

	size_t j = 0;

	if (s == NULL)
	{
		return NULL;
	}

	char* res = calloc(1, 1);

	if (s[0] == "")
	{
		res[0] = "";
		return res[0];
	}



	for (size_t i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'S' && s[i+1] == 'E' && s[i+2] == 'I')
		{
			res = realloc(res, (strlen(res) + sizeof(char) +1));
			res[j] = '6';
			res[j + 1] = 0;
			i += 2;
		}
		else if (s[i] == 'P' && s[i + 1] == 'E' && s[i + 2] == 'R')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = 'X';
			res[j + 1] = 0;
			i += 2;
		}
		else if (s[i] == 'A')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = '4';
			res[j + 1] = 0;
		}
		else if (s[i] == 'E')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = '3';
			res[j + 1] = 0;
		}
		else if (s[i] == 'I')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = '1';
			res[j + 1] = 0;
		}
		else if (s[i] == 'O')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = '0';
			res[j + 1] = 0;
		}
		else if (s[i] == 'S')
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = '5';
			res[j + 1] = 0;
		}
		else
		{
			res = realloc(res, (strlen(res) + sizeof(char) + 1));
			res[j] = s[i];
			res[j + 1] = 0;
		}
		j++;
	}
	return res;
}

int main(void) {
	char string[] = "";
	change_font(string);
}