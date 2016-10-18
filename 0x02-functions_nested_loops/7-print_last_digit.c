#include "holberton.h"
/**
 * print_last_digit - print the last digit of n
 * @n: value of the last digit
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int y;


	if (n < 0)
	{
		n *= -1;
	}

	y = n % 10;
	_putchar(y + '0');
	return (y);
}
