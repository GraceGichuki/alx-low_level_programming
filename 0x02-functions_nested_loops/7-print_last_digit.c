#include "main.h"
/**
 *print_last_digit - print last digit of a number
 *@n: number to be computed
 *
 *Return: if success return lastDigit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
