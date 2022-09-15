#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 1; i < n+1; 1++)
	{
		_putchar('_');
	}
	_putchar('\n');
	if (n < 0)
		_putchar('\n');
}
