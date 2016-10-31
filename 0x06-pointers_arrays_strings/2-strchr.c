#include "holberton.h"
/**
 * _strchr - print first instance of char c
 * @s: char str
 * @c: char to find
 * Return: char found or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return ('\0');
}
