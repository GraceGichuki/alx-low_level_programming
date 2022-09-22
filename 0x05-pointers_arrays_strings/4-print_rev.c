#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - reverse string folllowed by a new line
 * @s: string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
