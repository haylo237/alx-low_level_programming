#include "main.h"
#include <stdio.h>
/**
 * _strchr - Function to be executed
 * @s: input string
 * @c: occurence of character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
