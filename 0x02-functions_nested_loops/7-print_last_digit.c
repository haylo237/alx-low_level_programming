#include "main.h"
/**
 * print_last_digit - function that executes
 * @i: variable to be checked
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int ld;

	ld = i % 10;

	if (ld < 10)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
