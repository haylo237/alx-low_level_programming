#include "main.h"
/**
 * print_most_numbers - prints 9 - 0 except 2 & 4
 * Return: 0 is Success
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if ((i != '2') &&  (i != '4'))
		_putchar(i);
	}
	_putchar('\n');
}
