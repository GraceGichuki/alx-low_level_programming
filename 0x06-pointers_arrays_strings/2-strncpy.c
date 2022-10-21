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
	for (n = 0; *src; n++)
		*dest++ = *src++;
	*dest++ = '\0';
	return(dest);
}