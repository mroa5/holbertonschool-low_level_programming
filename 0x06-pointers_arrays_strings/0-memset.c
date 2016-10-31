#include "holberton.h"
/**
 * _memset - set first n chars to s
 * @s: char string
 * @b: char
 * @n: number of times char should be used
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
