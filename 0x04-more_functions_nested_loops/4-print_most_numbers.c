#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
			i++;
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
