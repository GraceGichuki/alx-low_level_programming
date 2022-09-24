#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character \ is to be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n == 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			for (k = 1; k < n + 1; k++)
			{
				print_line(i);
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
