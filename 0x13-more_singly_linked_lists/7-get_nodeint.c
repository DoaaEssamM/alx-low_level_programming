#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a specific index
 * @head: first node
 * @index: index to return
 *
 * Return: the node we are looking for, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempp = head;

	while (tempp && i < index)
	{
		tempp = tempp->next;
		i++;
	}

	return (tempp ? tempp : NULL);
}
