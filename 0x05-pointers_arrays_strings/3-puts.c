#include "main.h"
/**
 * _puts - puts characters
 * @str: string variable
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
