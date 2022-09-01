#include "lists.h"
/**
 * dlistint_t *add_dnodeint -  a function that adds a new node
 * @head: pointer
 * @n: int
 * Return: dlistint
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;
	*head = new;
	new->next = temp;

	if (temp != NULL)
		temp->prev = *head;

	return (new);
}
