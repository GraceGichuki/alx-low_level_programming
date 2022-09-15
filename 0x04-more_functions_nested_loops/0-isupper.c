#include "main.h"
/**
 *_isupper - checks for uppercase character
 *@c: character to checked
 *
 * Return: 1 if success, 0 if fail
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
