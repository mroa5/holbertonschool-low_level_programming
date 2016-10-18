#include "holberton.h"
/**
 * print_alphabet_x10 - prints alpha 10x
 */

void print_alphabet_x10(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
