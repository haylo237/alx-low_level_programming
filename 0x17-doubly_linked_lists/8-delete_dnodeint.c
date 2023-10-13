#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at 
 * any index
 * @head: Pointer to the pointer to the head
 * @index: index of the node to be deleted
 * Return: 1 is success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;
	dlistint_t *node_to_delete = current->next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0 ; index - 1 && current != NULL ; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	current->next = node_to_delete->next;

	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;

	free(node_to_delete);

	return (1);
}
