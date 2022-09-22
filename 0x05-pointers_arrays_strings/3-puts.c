#include "main.h"
/**
 * _puts - print a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
	if (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	else
		break;
	}
	_putchar('\n');
}
