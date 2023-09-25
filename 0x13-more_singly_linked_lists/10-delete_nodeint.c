#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: the first element in the list
 * @index: index of the node will delete
 *
 * Return: 1 (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (i < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		i++;
	}


	current = p->next;
	p->next = current->next;
	free(current);

	return (1);
}
