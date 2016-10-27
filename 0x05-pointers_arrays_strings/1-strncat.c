#include "holberton.h"
/**
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while(dest[x] != '\0')
		x++;
	while(y != n && src[y] != '\0')
	{
       		dest[x++] = src[y++];
	}
	dest[x] = '\0';
	return (dest);
}
