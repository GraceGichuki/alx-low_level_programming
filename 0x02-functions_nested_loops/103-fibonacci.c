#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
	long int num1, num2, num3, sum, n;

	num1 = 0;
	num2 = 1;
	sum = 0;

	for (n = 0; n < 4000000; n++)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			sum = sum + num3;
		num1 = num2;
		num2 = num3;
	}
	printf("%ld\n", sum);
	return (0);
}
