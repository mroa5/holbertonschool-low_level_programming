#include "holberton.h"
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x != n)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
		{
			while (x != n)
				dest[x++] = '\0';
			break;
		}
		x++;
	}
	return (dest);
}
