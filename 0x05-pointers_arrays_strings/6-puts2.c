#include "main.h"
/**
 * puts2 - print all characters in a string in order
 * @str: charater array
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
