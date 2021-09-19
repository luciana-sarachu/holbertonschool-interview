#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux = *head;
	int array[1024], i, ii;

	if (*head == NULL)
		return (1);

	for (i = 0; aux != NULL; i++)
	{
		array[i] = aux->n;
		aux = aux->next;
	}
	for (ii = 0; ii < i; ii++)
	{
		/* As i increment I have to subtract 1 to stand at the end of the array */
		if (array[ii] != array[i - ii - 1])
			return (0);
	}
	return (1);
}
