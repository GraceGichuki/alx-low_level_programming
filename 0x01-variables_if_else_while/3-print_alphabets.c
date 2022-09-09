/*prints the alphabet in lowercase, and then in uppercase*/
#include <stdio.h>

/**
 * main-entry
 * Return:zero
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	putchar('\n');

	return (0);
}
