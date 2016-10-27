#include "holberton.h"
/**
 * _strcat - concat two strings
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x++] = src[y++];
	}
	return (dest);
}
