#include <stdio.h>
/**
 * main - entry point
 * print all numbers base 10 not putchar
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
