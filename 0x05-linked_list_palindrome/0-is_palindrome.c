#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: list to check
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux;
	int array[1024], i, ii;

	if (*head == 0)
		return (1);

	aux = *head;

	for (i = 0; aux != NULL; i++)
	{
		array[i] = aux->n;
		aux = aux->next;
	}

	for (ii = 0; ii < i; ii++)
		if (array[ii] != array[i - ii - 1])
			return (0);

	return (1);
}
