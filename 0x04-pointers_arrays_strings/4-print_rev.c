#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
		x++;
	while (x >= y)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
