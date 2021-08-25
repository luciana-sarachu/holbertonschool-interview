#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux = *head;
	int array[1024], i = 0, ii = 0, middle;

	if (head == NULL)
		return (1);

	while (aux != NULL)
	{
		array[i] = aux->n;
		aux = aux->next;
		i++;
	}
	i--;
	middle = i / 2;
	while (i >= middle && ii <= middle)
	{
		if (array[ii] != array[i])
			return (0);
		i--, ii++;
	}
	return (1);
}
