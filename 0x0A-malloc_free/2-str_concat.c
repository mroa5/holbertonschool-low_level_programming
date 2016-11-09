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
#include "holberton.h"
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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2 concatenated otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(_strlen(s1) + _strlen(s2) + 1);

	n = 0;
	while (s1[n] != '\0')
		n++;
	_strncat(s, s1, n);
	i = 0;
	while (s2[i] != '\0')
		i++;
	_strncat(s, s2, i);
	return (s);

}
