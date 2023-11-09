#include "lists.h"

/**
 * get_dnodeint_at_index - return the node num of a dlistint_t linked list.
 * @head: head of list
 * @index: the node to search index, starting from 0
 * Return: node num or null
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
