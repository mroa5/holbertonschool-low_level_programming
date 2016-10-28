#include "holberton.h"
/**
 * rot13 - turn str into rot13
 * @p: str
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
			if ((p[x] >= 'n' && p[x] <= 'z') ||
			    (p[x] >= 'N' && p[x] <= 'Z'))
				{
					p[x] -= 13;
				}
			else
					p[x] += 13;
			x++;
		}
		x++;
	}
	return (p);
}
