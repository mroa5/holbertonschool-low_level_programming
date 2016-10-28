#include "holberton.h"
/**
 * leet - change to 1337 talk
 * @p: char
 * Return: p
 */

char *leet(char *p)
{
	int x;

	x = 0;
	while (p[x] != '\0')
	{
		while (p[x] == 'a' || p[x] == 'A')
			p[x] = '4';
		while (p[x] == 'e' || p[x] == 'E')
			p[x] = '3';
		while (p[x] == 'o' || p[x] == 'O')
			p[x] = '0';
		while (p[x] == 't' || p[x] == 'T')
			p[x] = '7';
		while (p[x] == 'l' || p[x] == 'L')
			p[x] = '1';
		x++;
	}
	return (p);
}
