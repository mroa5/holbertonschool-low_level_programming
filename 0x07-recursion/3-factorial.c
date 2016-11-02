#include "holberton.h"
/**
 * factorial - return factorial of given number
 * @n: int
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n -1));
}
