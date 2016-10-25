#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
		x++;
	while (s[x] >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
