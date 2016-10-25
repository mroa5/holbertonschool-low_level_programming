#include "holberton.h"
/**
 * _puts - print string
 * @str: string
 */
void _puts(char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
		x++;
	while (y <= x)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
