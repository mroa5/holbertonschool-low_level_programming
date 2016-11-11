#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for array of nmemb elements
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to memory || NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	return (s);
}
