#include "main.h"
/**
 * reverse_array - Reverse string
 * @a: Array
 * @n: Array size
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
