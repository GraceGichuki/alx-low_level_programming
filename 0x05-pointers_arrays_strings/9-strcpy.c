#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * src: pointer to string to be copied
 * dest: pointer to the buffer the string copied will be put
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		*dest++ = *src++;
		if (*src == 0);
			break;
	}
	return (dest);
}
