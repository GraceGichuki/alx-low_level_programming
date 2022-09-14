/* prints all possible combinations of two two-digit numbers*/
#include <stdio.h>
/**
 * main-entry
 * Return: zero
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k ='0'; k <= '9'; k++)
				for (l ='0'; l <='9';)
					if (i == k && j == l)
						l++;
					else 
					{
						putchar (i);
						putchar (j);
						putchar (' ');
						putchar (k);
						putchar (l);
						putchar (',');
						putchar (' ');
						k++;
					}
	putchar ('\n');
	return (0);
}
