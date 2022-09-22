#include "main.h"
/**
 * _strlen - lenth of a string
 * @s: pointer to a string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (*s != '\0')
		{
			s++;
			continue;
		}
		else
			break;
	}
	return (i);
}
