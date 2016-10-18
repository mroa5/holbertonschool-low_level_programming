#include "holberton.h"
/**
 * print_sign - prints +, -, or 0
 * @n: number checked if +, -, or 0
 *
 * Return: 1 if greater than 0; 0 if 0; -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
