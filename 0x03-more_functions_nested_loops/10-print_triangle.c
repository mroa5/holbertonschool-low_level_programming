#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
		_putchar('\n');
	while (x < size)
	{
		y = size - 1;
		while (y > x)
		{
			_putchar(' ');
			y--;
		}
		y = 0;
		while (y < x + 1)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
