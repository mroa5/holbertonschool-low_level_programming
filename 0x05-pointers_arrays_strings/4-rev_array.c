#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x, first, last;

	x = 0;
	n -= 1;

	while (x < n)
	{
		first = a[x];
		last = a[n];
		a[x++] = last;
		a[n--] = first;
	}
}
