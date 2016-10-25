#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int x, len;
	char first, last;

	len = 0;
	x = 0;
	while (s[len] != '\0')
		len++;
	len--;
	while (x < len)
	{
		first = s[x];
		last = s[len];
		s[x++] = last;
		s[len--] = first;
	}
}
