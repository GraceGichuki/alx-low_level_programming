#include "main.h"
#include "6-abs.c"
/**
 *print_last_digit - print last digit of a number
 *@n: number to be computed
 *
 *Return: if success return lastDigit
 */
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
