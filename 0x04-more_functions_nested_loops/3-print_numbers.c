#include "main.h"
/**
 * print_numbers - executed function
 * Return: 0 means success
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
