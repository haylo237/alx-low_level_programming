#include "main.h"
/**
 * _puts - puts characters
 * @s: string variable
 * Return: Void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
