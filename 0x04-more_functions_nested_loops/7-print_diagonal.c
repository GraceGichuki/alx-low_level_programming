#include "main.h"

/**
 * printSpace - prints a space
 * @n: number of times the space is to be printed
 *
 * Return: nothing
 */

void printSpace(int n)
{
	int i;

	for (i = 1; i < n + 1; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character \ is to be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			for (k = 1; k < n + 1; k++)
			{
				printSpace(k);
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
