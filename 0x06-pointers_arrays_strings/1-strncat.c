#include "main.h"
/**
 * _strncat - Concat strings with a number of characters
 * @dest: destination string
 * @src: Source string
 * @n: number of characters
 * Return: Character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destPtr = dest;

	while (*destPtr != '\0')
	{
		destPtr++;
	}
	while (*src != '\0' && n > 0)
	{
		*destPtr++ = *src++;
		n--;
	}
	*destPtr = '\0';
	return (dest);
}
