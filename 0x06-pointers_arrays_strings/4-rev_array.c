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
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
