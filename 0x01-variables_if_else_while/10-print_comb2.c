#include <stdio.h>
/**
 * main - entry point
 * print 0-99 seperated by commas
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (x = '0'; x <= '9' ; x++)
		{
			putchar(n);
			putchar(x);
			if (n == '9' && x == '9')
			{
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
