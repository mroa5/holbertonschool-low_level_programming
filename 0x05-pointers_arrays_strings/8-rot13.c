#include "holberton.h"
/**
 * rot13 - convert str to rot13
 * @p: string to convert to rot13
 *
 * Return: p
 */
char *rot13(char *p)
{
	int x;

	x = 0;
	while (p[x] != '\0')
	{
		while ((p[x] >= 'a' && p[x] <= 'z') ||
		       (p[x] >= 'A' && p[x] <= 'Z'))
		{
			if ((p[x] >= 'N' && p[x] <= 'Z') ||
			    (p[x] >= 'n' && p[x] <= 'z'))
				p[x] -= 13;
			else
				p[x] += 13;
			x++;
		}
		x++;
	}
	return (p);
}
