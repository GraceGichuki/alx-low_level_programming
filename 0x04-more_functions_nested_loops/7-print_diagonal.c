#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of times the characte \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
