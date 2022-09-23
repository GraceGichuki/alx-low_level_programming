#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
	unsigned int num1, num2, num3, sum;
	int i;

	num1 = 0;
	num2 = 1;

	num3 = num1 + num2;

	for (i = 0; num3 <= 4000000; i++)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			sum = sum + num3;
		num1 = num2;
		num2 = num3;
	}
	printf("%u\n", sum);
	return (0);
}
