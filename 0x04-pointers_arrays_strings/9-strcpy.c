#include "holberton.h"
/**
 * _strcpy - copy str
 * @dest: temp string
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	char *a;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	a = dest;
	return (a);
}
