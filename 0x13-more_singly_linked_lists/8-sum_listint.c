#include "lists.h"

/**
 * sum_listint - the sum of the data in the list
 * @head: first node
 *
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempp = head;

	while (tempp)
	{
		sum += tempp->n;
		tempp = tempp->next;
	}

	return (sum);
}
