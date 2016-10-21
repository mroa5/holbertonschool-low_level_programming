#include "holberton.h"
/**
 * print_diagonal - print
 * @n: number of lines
 *
 */
void print_diagonal(int n)
{
	int x;
	int y;

	x = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (x < n)
	{
		y = x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
}
