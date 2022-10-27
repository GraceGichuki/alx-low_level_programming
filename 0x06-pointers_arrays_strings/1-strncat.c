#include "main.h"
/**
 * *_strncat  -concatenates two strings
 * @dest: string to be added to
 * @src: string to be added
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j]; j++, i++)
		dest[i] = src[j];
	if (j < n - 2)
		dest[i] = '\0';
	return (dest);
}
