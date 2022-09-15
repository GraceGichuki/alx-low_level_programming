#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	i = print_alphabet();

	for (j = 0; j < 10; j++)
	{
		_putchar(i);

	}
	_putchar('/n');
}
