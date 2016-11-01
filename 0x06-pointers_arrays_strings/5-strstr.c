#include "holberton.h"
/**
 * _strstr - find first occurence of needle in haystack
 * @haystack: char 1
 * @needle: char 2
 *
 * Return: haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, start;

	x = 0;
	while (haystack[x] != '\0')
	{
		start = x;
		y = 0;
		while (haystack[x] == needle[y] &&
		       needle[y] != '\0' && haystack[x] != '\0')
		{
			x++;
			y++;
		}
		if (needle[y] == '\0')
			return (haystack + start);
		x = start + 1;
	}
	return ('\0');
}
