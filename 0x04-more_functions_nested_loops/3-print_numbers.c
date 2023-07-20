#include "main.h"
/**
 * print_numbers - executed function
 * Return: 0 means success
 */
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
