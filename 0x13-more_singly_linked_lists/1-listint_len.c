#include "lists.h"

/**
 * listint_len - return number of the linked list elements
 * @h: traverse linked list of type listint_t
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
