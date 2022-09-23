#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
	unsigned int num1, num2, num3, sum;

	num1 = 0;
	num2 = 1;

	for (sum = 0; sum < 4000000; sum++)
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
