#include "main.h"
/**
 * _puts - puts characters
 * @str: string variable
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
