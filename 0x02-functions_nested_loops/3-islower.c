#include "main.h"
/**
 * _islower - determines if char is lowecase
 * @c: A char
 * Return: returns 1 for lowecase. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
