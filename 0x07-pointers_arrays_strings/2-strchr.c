#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function to be executed
 * @s: input string
 * @c: occurence of character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
