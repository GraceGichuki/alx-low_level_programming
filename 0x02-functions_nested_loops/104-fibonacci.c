#include <stdio.h>

/**
 * main - entry
 * Return: zero
 */

int main(void)
{
       	int num1, num2, num3, n;

	num1 = 0;
	num2 = 1;

	for (n = 0; n < 99; n++)
	{
		num3 = num1 + num2;
		printf("%u", num3);
		if (n != 98)
			printf(", ");
		num1 = num2;
		num2 = num3;
	}
	putchar('\n');
	return (0);
}
