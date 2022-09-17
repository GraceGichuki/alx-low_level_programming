#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: number to start at
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
