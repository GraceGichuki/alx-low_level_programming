#include "main.h"
/**
 * print_most_numbers - print numbers except 2 and 4
 * Return:nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9';)
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
}
