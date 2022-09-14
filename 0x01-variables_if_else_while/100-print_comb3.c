/*prints all possible different combinations of two digits*/

#include <stdio.h>

/**
 * main-entry
 * Return: zero
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9';)
		{
			if (i != j && i < j)
			{
				putchar (i);
				putchar (j);
				putchar (',');
				putchar (' ');
				j++;
			}
			else
				j++;
		}
	putchar ('\n');
	return (0);
}
