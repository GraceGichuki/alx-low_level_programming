/*print the alphabet in lowercase, followed by a new line.*/

#include <stdio.h>

/**
 * main-entry
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}
