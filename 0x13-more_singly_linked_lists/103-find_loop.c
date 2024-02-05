#include "lists.h"

/**
 * find_listint_loop - detects a loop in a linked list
 * @head: pointer to head of list
 * Return: address where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = head;
	slow = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (0);
}
