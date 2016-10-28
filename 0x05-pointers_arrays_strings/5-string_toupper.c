#include "holberton.h"
/**
 * string_toupper - lower letters to upper
 * @p: str
 * Return: p
 */

char *string_toupper(char *p)
{
	int x;

	x = 0;
	while (p[x] != '\0')
	{
		if (p[x] >= 'a' && p[x] <= 'z')
			p[x] -= 32;
		x++;
	}
	return (p);
}
