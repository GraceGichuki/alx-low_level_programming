#include "main.h"
/**
 * *_strcpy - copies a string
 * @src: pointer to string to be copied
 * @dest: pointer to the buffer the string copied will be put
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
