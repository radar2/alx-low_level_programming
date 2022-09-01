#include "lists.h"
/**
 * dlistint_len -  a function that return number 
 * @h: pointer of dlistint_t
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
