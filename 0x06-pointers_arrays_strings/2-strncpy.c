#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to where the string will be copied to
 * @src: pointer to the string that is to copied
 * @n: number of byts to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	if (i < n - 2)
		dest[i] = '\0';
	return (dest);
}
