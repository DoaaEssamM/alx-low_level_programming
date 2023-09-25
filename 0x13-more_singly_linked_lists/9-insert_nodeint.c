#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a spcific position
 * @head: the first node
 * @idx: index where the new node will be added
 * @n: data which insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tempp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tempp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tempp->next;
			tempp->next = new;
			return (new);
		}
		else
			tempp = tempp->next;
	}

	return (NULL);
}
