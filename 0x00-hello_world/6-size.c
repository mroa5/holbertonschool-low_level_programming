#include <stdio.h>
/**
 * main - entry point
 * print size of types
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i bytes\n", sizeof(char));
	printf("Size of an int: %i bytes\n", sizeof(int));
	printf("Size of a long int: %i bytes\n", sizeof(long));
	printf("Size of a long long int: %i bytes\n", sizeof(long long));
	printf("Size of a float: %i bytes\n", sizeof(float));
	return (0);
}
