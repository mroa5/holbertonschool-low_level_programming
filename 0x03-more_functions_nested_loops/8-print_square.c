#include "holberton.h"
/**
 * print_square - print square
 * @size: size of square
 *
 */
void print_square(int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
