#include "holberton.h"
/**
 * more_numbers - print 0 to 14
 *
 */
void more_numbers(void)
{
	int n, y;

	y = 0;
	while (y <= 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		y++;
		_putchar('\n');
	}
}
