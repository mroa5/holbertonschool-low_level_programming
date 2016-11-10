#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of str
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strncat - get n bytes from str
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (y != n && src[y] != '\0')
	{
		dest[x++] = src[y++];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * string_nconcat - concat two strings
 * @s1: str 1
 * @s2: str 2
 * @n: n bytes of str 2 to concat
 *
 * Return: concat str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	_strncat(s, s1, i);
	y = _strlen(s2) + 1;
	if (n >= y)
	{
		_strncat(s, s2, y);
	}
	else
		_strncat(s, s2, n);
	return (s);
}
