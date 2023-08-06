#include "main.h"
/**
 * _strcmp - Compare strings
 * @s1: String 1
 * @s2: string 2
 * Return: Returns interger
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
