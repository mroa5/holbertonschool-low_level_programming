#include "holberton.h"
/**
 * _isalpha - checks if c is a letter, lowercase, or uppercase
 * @c: character checked if its and alpha
 *
 * Return: 1 if letter, lowercase, or uppercase; 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
