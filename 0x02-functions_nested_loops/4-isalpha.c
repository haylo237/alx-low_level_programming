#include "main.h"
/**
 * _isalpha - Determines if c is a letter
 * @c: ASCII character
 * Return: 1 if c is lower or upper. 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
