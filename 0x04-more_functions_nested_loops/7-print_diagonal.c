#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character \ is to be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i < n + 1; i++)
	{
		_putchar(' ')
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
