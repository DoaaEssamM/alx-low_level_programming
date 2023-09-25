#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: the first node
 *
 * Return: number of free list elements
*/

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
