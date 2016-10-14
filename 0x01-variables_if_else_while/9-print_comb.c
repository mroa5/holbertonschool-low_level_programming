#include <stdio.h>
/**
 * main - entry point
 * print 0-9 seperated by commas
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
		if (n <= '8')
	      	putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
