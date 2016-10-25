#include "holberton.h"
/**
 * swap_int - swap integers
 * @a - int 1
 * @b - int 2
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
