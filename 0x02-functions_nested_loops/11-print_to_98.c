#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - running function
 * @n: Variable
 * Return: 0 means Success
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
	}
	else
		for (; n >= 98 ; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
}
