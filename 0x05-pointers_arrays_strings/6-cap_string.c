#include "holberton.h"

/**
 * seperator - checks if its a seperator
 * @c: char to check
 * Return: 1 if seperator
 */
int seperator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
	        c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
	    c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

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
		if (seperator(p[x]) == 1 && (p[x + 1] >= 'a' && p[x + 1] <= 'z'))
		{
			p[x + 1] -= 32;
			x++;
		}
		else
			x++;
	}
	return (p);
}
