#include "holberton.h"
/**
 * puts_half - print second half of string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		len++;
	len /= 2;
	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
