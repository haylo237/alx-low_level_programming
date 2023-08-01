#include "main.h"
/**
 * _memcpy - Function to copy memory
 * @src: source memory
 * @dest: destination memory
 * @n: number of bytes to copy
 * Return: Return destination pointer:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
