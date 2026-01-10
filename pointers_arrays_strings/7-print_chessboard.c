#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to a 2D array of 8 chars
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)      /* iterate rows */
	{
		for (j = 0; j < 8; j++)  /* iterate columns */
			_putchar(a[i][j]);

		_putchar('\n');           /* newline after each row */
	}
}

