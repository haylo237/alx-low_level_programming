#include "lists.h"
/**
 * print_dlistint - prints the content of a
 * doubly linked list
 * @h: Pointer to the head
 * Return: Number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_Nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_Nodes++;
	}

	return (n_Nodes);
}
