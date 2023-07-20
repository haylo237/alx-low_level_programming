#include "main.h"
/**
 * _isupper - Executes the function
 * @c: Variable to be checked
 * Return: Returs 1 for & 0 for false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
