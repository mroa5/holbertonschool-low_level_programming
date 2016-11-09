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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy str
 * @dest: temp string
 * @src: source string
 *
 * Return: dest
 */
char _strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (*dest);
}
/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a
 * parameter.
 *
 * @str: variable string
 * Return: string otherwise NULL
 */
char *_strdup(char *str)
{
	char *dupe;

	if (str == NULL)
		return (NULL);
	dupe = malloc(_strlen(str) + 1);
	if (dupe == NULL)
	{
		return (NULL);
	}
	_strcpy(dupe, str);
	return (dupe);
}
