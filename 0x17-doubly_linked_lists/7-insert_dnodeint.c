#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at any position
 * @h: head
 * @idx: index where the node will be placed
 * @n: value to be place in the node
 * Return: Pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;	

	if (h == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}

	for (i = 0 ; i < idx - 1 && current != NULL ; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
