#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int x;
	int y;

	for (n = '0'; n <= '9' ; n++)
	{
		for (x = '0' ; x <= '9' ; x++)
		{
			for (y = '0' ; y <= '9' ; y++)
			{
				if (n < x && x < y)
				{
				putchar(n);
				putchar(x);
				putchar(y);
				if (n != '7' || x != '8' || y != '9')
				{
				putchar(',');
				putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
