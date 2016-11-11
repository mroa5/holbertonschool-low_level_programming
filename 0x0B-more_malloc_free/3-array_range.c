#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: int min
 * @max: int max
 *
 * Return: s || NULL
 */
int *array_range(int min, int max)
{
	int *s, x;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);
	x = 0;
	while (min <= max)
	{
		s[x] = min;
		x++;
		min++;
	}
	return (s);
}
