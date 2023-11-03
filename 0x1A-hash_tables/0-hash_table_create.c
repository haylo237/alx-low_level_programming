#include "hash_tables.h"
/**
 * hash_table_create - Creating a harsh table
 * @size: the size of the array
 * Return: An pointer of newly created array. NULL
 * if it fails
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	harsh_table_t *h_table = NULL;
	unsigned long int i;

	h_table = malloc(sizeof(harsh_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		h_table[i] = NULL;

	return (h_table);
}
