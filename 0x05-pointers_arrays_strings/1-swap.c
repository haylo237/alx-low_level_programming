#include <stdio.h>
/**
 * swap_int - swaps pointers
 * @a: first number
 * @b: first variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
