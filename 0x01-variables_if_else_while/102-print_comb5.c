#include <stdio.h>
/**
 * main - entry point
 * print all two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x;
	int y;

	for (x = 0 ; x <= 98 ; x++)
	{
		for (y = 0 ; y <= 99 ; y++)
		{
			a = x / 10;
			b = x % 10;
			c = y / 10;
			d = y % 10;
			if (x < y)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
