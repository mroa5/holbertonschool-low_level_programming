#include "holberton.h"
/**
 * cap_string - cap words of string
 * @p: string
 * Return: p
 */
char *cap_string(char *p)
{
	int x;

	x = 0;
	if (p[x] >= 'a' && p[x] <= 'z')
		p[x] -= 32;
	while (p[x] != '\0')
	{
		if (p[x] <= '/' && (p[x + 1] >= 'a' && p[x + 1] <= 'z'))
		{
			p[x + 1] -= 32;
			x++;
		}
		else
			x++;
	}
	return (p);
}
