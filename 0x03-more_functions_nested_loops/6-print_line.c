#include "holberton.h"
/**
 * print_line - print _
 *
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (n >= 0)
			_putchar('_');
		else
			_putchar('\n');
		x++;
	}
	_putchar('\n');
}
