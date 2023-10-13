#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: The head of the list
 * Return: O means success
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;
		head = head->next;
		free(temp);
	}
}
