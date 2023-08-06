#include "main.h"
/**
 * _strcat - Concatenates
 * @dest: Destiantion string
 * @src: Source string
 * Return: Characrter
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
