#include "main.h"
#include "2-strlen.c"
#include "3-puts.c"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
}
