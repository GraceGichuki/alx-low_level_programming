/*prints the alphabet in lowercase, and then in uppercase*/
#include <stdio.h>

/**
 * main-entry
 * Return:zero
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar(10);
	return (0);
}
