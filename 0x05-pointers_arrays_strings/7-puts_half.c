#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - print half of a string
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n;

	if ((_strlen(str) % 2) == 0)
		n = _strlen(str) / 2;
	else
		n = (_strlen(str) + 1) / 2;

	for (i = n; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
