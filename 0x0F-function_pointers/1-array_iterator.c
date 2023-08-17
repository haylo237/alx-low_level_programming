#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function does via an array
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
