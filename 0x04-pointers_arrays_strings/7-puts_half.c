#include "holberton.h"
/**
 * puts_half - print second half of string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int len, half;

	len = 0;
	half = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;
	while (half <= len)
	{
		_putchar(str[half]);
		half++;

	}
	_putchar('\n');
}
