#include "holberton.h"
/**
 * _islower checks if c char is lowercase char
 */

int _islower(int c)
{
	if (c > 96 && c <= 172)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
