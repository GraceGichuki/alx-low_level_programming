/*lowercase alphabets in reverse*/
#include <stdio.h>

/**
 * main-entry
 * Return: zero
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
