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

	for (n = '0' ; n <= '9' ; n++)
	{
		for (x = '0'; x <= '9' ; x++)
		{
			if (n != x && n < x)
			{
				putchar(n);
				putchar(x);
				if (n != '8' || x != '9')
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
