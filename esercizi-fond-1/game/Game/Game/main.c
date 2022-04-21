#include <stdio.h>

void print_board(FILE* f, const unsigned short board[4][4]) {

	char separatore[] = "+----+----+----+----+\n";
	
	for (size_t i = 0; i < 4; i++)
	{
		fputs(separatore, f);
		for (size_t k = 0; k < 4; k++)
		{
			if (board[i][k] == 0)
			{
				fputs("|    ", f);
			}
			else if (board[i][k] < 10)
			{
				fputs("|   ", f);
				fprintf(f, "%d", board[i][k]);
			}
			else if (board[i][k] < 100)
			{
				fputs("|  ", f);
				fprintf(f, "%d", board[i][k]);
			}
			else if (board[i][k] < 1000)
			{
				fputs("| ", f);
				fprintf(f, "%d", board[i][k]);
			}
			else if(board[i][k] > 1000)
			{
				fputs("|", f);
				fprintf(f, "%d", board[i][k]);
			}
		}
		fputs("|", f);
		fputs("\n", f);
	}
}