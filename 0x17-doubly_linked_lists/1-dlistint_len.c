#include "lists.h"
/**
 * 1-dlistint_len - returns the number of nodes
 * @h: Pointer to the head
 * Return: Number of Nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_Node = 0;

	while (h != NULL)
	{
		n_Node++;
		h = h->next;
	}

	return (n_Node);
}
