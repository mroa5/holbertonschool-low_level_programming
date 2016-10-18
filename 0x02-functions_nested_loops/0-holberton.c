#include "holberton.h"
/**
 * main - entry point
 * print Holberton
 * Return: 0
 */

int main (void)
{
	int n;

	n = 1;
	while (n > 0)
	{
		_putchar('H');
		_putchar('o');
		_putchar('l');
		_putchar('b');
		_putchar('e');
		_putchar('r');
		_putchar('t');
		_putchar('o');
		_putchar('n');
		n--;
	}
	_putchar('\n');
	return (0);
}
