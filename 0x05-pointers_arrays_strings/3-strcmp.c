#include "holberton.h"
/**
 * _strcmp - compare strs
 * @s1: str 1
 * @s2: str 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return ((s1[x] - '0') - (s2[x] - '0'));
		x++;
	}
	return (0);
}
