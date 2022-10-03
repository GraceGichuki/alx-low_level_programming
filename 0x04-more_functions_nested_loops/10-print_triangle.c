#include "main.h"
/**
 * print_triangle - print trianle
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i < size + 1; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
