/*prints all single digit numbers of base 10 starting from 0*/

#include <stdio.h>

/**
 * main-entry
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}