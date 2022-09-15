#include "main.h"
/**
 *_abs - compute absolute value of an integer
 *Return: if success absoluteValue
 */
int _abs(int)
{
	int n;
	int absoluteValue;

	if (n >= 0)
	{
		absoluteValue = n;
	}
	else
	{
		absoluteValue = n * -1;
	}
	return (absoluteValue);
}
