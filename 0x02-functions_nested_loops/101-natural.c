#include <stdio.h>

/**
 * main - entry
 *
 * Return: zero
 */

int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
