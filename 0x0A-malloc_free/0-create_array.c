#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - set first n chars to s
 * @s: char string
 * @b: char
 * @n: number of times char should be used
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

/**
 * create_array - creates a block of memory using
 *  malloc and fills it with a character
 *
 * @size: array size
 * @c: character to put in array
 * Return: array otherise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int arsize;

	if (size > 0)
		arsize = (sizeof(char) * (int)size);
	else
		return (NULL);
	s = malloc(arsize);
	_memset(s, c, size);
	return (s);
}
