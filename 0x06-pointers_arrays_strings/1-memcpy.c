#include "holberton.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @src: source of bytes to copy
 * @dest: destination for copied bytes
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
