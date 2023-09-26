#include "main.h"

/**
 * print_chessboard - i love chess
 * @a: array of 8 elements
 * Return: what is needed
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
