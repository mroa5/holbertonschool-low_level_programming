#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: character checked if digit
 *
 * Return: 1 if digit; 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
