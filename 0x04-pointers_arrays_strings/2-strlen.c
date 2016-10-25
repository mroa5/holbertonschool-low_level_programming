#include "holberton.h"
/**
 * _strlen - length of str
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}
