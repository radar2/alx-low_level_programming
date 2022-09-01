#include "lists.h"
/**
 * print_dlistint -  a function that prints all the elements of a dlistint_t
 * @h: pointer of dlistint_t
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
