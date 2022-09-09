/*print the alphabet in lowercase, followed by a new line.*/

#include <stdio.h>

/**
 * main-entry
 * Return: zero
 */
int main(void)
{
	char ch;

	for (char = 'a'; char <= 'z'; char++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
