#include "main.h"
/**
 * print_rev - prints reverse
 * @s: string variable
 */

void print_rev(char *s)
{
	int length = 0, i;
	char *end = s;

	while (*s != '\0')
	{
		length++;
		end++;
	}

	for (i = length - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
