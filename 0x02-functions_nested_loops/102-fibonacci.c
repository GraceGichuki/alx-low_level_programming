#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
	long long int num1, num2, num3, n;

	num1 = 1;
	num2 = 2;

	for (n = 0; n < 50; n++)
	{
		num3 = num1 + num2;
		printf("%lld");
		num1 = num2;
		num2 = num3;
		if (i != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
