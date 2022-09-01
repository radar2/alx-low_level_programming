#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: pointter
 * @n: nunber
 * Return: new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;

	return (new);
