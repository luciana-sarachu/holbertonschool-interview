#include "lists.h"

/**
 * check_cycle - check if singly linked list is cycle
 * @list: pointer to head of list
 * Return: number of nodes
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = fast = list;
	while (slow && fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
