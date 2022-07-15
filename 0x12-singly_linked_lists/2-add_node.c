#include <stdio.h>
#include "lists.h"

/**
 * _strlen - gets length of string
 * @s: string passed;
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
 * add_node - adds node to head of linked list
 * @head: pointer to the pointer that starts the linked list
 * @str: string value for str member
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
