/*prints all possible different combinations of two digits*/
#include <stdio.h>
/**
 *main-entry
 *Return: zero
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9' j++;
			       for (k = '0'; k <= '9';)
		       			if (j < k && j != k && i != k && i < j && i != j) 
					{
						putchar (i);
						putchar (j);
						putchar (k);
						k++;
						putchar (',');
						putchar (' ');
					}
					else
						k++;
	return (0);
}

