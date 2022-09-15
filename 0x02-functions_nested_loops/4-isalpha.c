#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked
 *
 * Return: if success 1.
 * If fails, 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
