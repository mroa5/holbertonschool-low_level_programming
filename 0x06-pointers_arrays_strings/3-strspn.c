#include "holberton.h"
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: chars to search
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
				break;
			y++;
		}
		if (!accept[y])
			break;
		x++;
	}
	return (x);
}
