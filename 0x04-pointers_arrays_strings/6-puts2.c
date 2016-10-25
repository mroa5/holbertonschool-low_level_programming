#include "holberton.h"
/**
 * puts2 - print every other
 * @str: string
 *
 */
void puts2(char *str)
{
	int len, x;

	len = 0;
	x = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (x <= len)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
