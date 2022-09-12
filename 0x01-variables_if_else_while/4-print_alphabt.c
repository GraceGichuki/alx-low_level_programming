/*Print all the letters except q and e*/

#include <stdio.h>

/**
 * main-entry
 * Return:zero
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z';)
	{
		if (i == 'e' || i == 'q')
			i++;
		else
		{
			putchar (i);
			i++;
		}
	}
	putchar ('\n');
	return (0);
}
