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
	_putchar('\\');
	_putchar('\n');
}

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character \ is to be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (k = 1; k < n + 1; k++)
		{
			printSpace(k);
		}
}
