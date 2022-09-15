#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: character to check
 *
 * Return: 1 if success and 0 if fail
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
