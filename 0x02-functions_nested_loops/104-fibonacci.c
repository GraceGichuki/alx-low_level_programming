#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
	float num1, num2, num3;
	int n;

	num1 = 0;
	num2 = 1;

	for (n = 0; n < 99; n++)
	{
		num3 = num1 + num2;
		if (num3 < 0)
			num3 = num3 * -1;
		printf("%f", num3);
		if (n != 98)
			printf(", ");
		num1 = num2;
		num2 = num3;
	}
	putchar('\n');
	return (0);
}
