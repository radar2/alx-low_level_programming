#include "lists.h"

/**
 * sum_dlistint - the sum of all node data
 * @head: Pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
