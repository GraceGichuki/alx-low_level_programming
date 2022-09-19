#include "main.h"
/**
 * swap_int - pointers to swap to integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
