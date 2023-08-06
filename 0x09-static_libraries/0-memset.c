#include "main.h"
/**
 * _memset - function to sset memory
 * @s: pointer to a memory block
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: a pointer, s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
