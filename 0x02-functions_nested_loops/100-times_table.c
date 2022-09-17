#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: table to be printed
 *
 * Return: zero
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				m = i * j;
				if (m > 99)
				{
					_putchar(m / 100 + '0');
					_putchar((m / 10) % 10 + '0');
				}
				else if (m > 9)
				{
					_putchar(' ');
					_putchar(m / 10 + '0');
				}
				else if (j != 0 && m < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(m % 10 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
