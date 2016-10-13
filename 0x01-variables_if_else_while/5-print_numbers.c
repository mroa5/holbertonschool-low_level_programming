#include <stdio.h>
/**
 * main - entry point
 * print all numbers of base 10
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; ++n)
	{
		printf("%i", n);
	}
	putchar('\n');
	return (0);
}
