#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to where the string will be copied to
 * @src: pointer to the string that is to copied
 * @n: iteration
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && dest[i]; i++)
		dest[i] = src[i];
	if ( i < n - 1)
		dest[i] = '\0';
	return (dest);
}
