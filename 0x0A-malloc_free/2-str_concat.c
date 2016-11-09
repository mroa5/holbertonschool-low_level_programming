#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of str
 * @s: string
 * Return: length of str
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2 concatenated otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;

	c = malloc(sizeof(*s1) + sizeof(*s2));

	if (c == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*s1 != '\0')
	{
		c[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		c[i] = *s2;
		s2++;
		i++;
	}
	return (c);
}
