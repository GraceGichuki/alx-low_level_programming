#include "main.h"
/**
 * _islower - check for lowercase characters
 *
 * Return: i if success.
 * If fails returns 0.
 */
int _islower(int c)
{
	int c;

	if ( c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
