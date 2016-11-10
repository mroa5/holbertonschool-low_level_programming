#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check if malloc fails
 * @b: size of memory
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
