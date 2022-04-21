#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

extern void cornice(uint8_t h, uint8_t w) {

	if (h == 0 || h == NULL || w == 0 || w == NULL)
	{
		return;
	}
	bool isFirstV = true;
	bool isFirstH = true;
	bool isLast = false;
	bool isLastRow = false;
	int quantoHoScritto = 0;

	for (size_t i = 0; i < w; i++)
	{
		printf("%c", '/');
		quantoHoScritto++;
		printf("%c", '-');
		quantoHoScritto++;
		printf("%c", '\\');
		quantoHoScritto++;
	}
	printf("%c", '|\n');

	for (size_t i = 0; i < h; i++)
	{
		if (i == h-1)
		{
			isLast = true;
		}
		if (isFirstV && !isLast)
		{
			isFirstV = false;
			printf("%c", '|');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '|');
			printf("%c", '\n');
			printf("%c", '\\');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '/');
			printf("%c", '\n');
		}
		else if(!isLast)
		{
			printf("%c", '/');
			for (size_t i = 0; i < quantoHoScritto-2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '\\');
			printf("%c", '\n');
			printf("%c", '|');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '|');
			printf("%c", '\n');
			printf("%c", '\\');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '/');
			printf("%c", '\n');
		}
		if (isLast)
		{
			printf("%c", '/');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '\\');
			printf("%c", '\n');
			printf("%c", '|');
			for (size_t i = 0; i < quantoHoScritto - 2; i++)
			{
				printf("%c", ' ');
			}
			printf("%c", '|');
			printf("%c", '\n');
			printf("%c", '\\');

			
			
			for (size_t i = 0; i < w; i++)
			{
				if (i == 0)
				{
					printf("%c", '-');
					printf("%c", '/');
				}
				else if (i == w)
				{
					printf("%c", '-');
					printf("%c", '/');
				}
				else
				{
					printf("%c", '\\');
					printf("%c", '-');
					printf("%c", '/');
				}
			}
		}
	}
}

int main(void) {

	cornice(10, 10);
}