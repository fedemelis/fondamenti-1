#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void bad_word_filter(char* s, char** words, size_t nwords)
{
	size_t dim_s = strlen(s);
	size_t count = 0;
	size_t max_count = 0;
	size_t index = 0;
	for (size_t i = 0; i < nwords; i++)
	{
		max_count = strlen(words[i]);
		count = 0;
		for (size_t n = 0; n < dim_s; n++)
		{
			if (s[n] == words[i][count])
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == max_count)
			{
				index = n - count + 1;
				for (size_t j = 0; j < max_count; j++)
				{
					s[index + j] = '*';
				}
			}
		}
	}
}


int main(void) {

	char s[] = "Sei un carciofo";
	char* words[] = {"carciofo", "broccolo", "cavolfiore"};
	
	bad_word_filter(s, words, 3);


}