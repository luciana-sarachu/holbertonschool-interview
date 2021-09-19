#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @h: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **h)
{
	listint_t *current;
	int array[1024], i, j;

	if (*h == 0)
		return (1);

	current = *h;

	for (i = 0; current != NULL; i++)
	{
		array[i] = current->n;
		current = current->next;
	}

	for (j = 0; j < i; j++)
		if (array[j] != array[i - j - 1])
			return (0);

	return (1);
}
