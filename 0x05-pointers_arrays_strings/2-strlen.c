#include "main.h"
/**
 * _strlen - gets string length
 * @s: variable for the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
