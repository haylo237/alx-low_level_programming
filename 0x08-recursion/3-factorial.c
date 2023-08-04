#include "main.h"

/**
 * factorial - Calculate factorial
 * @n: the number to factorial
 * Return: integer Value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
