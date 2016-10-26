#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array
 * @n: int
 *
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
		x++;
	}
	printf("\n");
}
