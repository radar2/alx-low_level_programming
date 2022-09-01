#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that
 * @head: Pointer
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
