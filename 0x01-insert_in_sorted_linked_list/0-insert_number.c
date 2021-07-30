#include <stdlib.h>
#include "lists.h"
/**
 * insert_node -add node to list.
 * @head: head of the sll
 * @number: integer value to insert
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode, *aux = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = number;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (aux->next == NULL)
	{
		newNode->next = NULL;
		aux->next = newNode;
		return (newNode);
	}
	if (number <= aux->n)
	{
		newNode->next = aux;
		*head = newNode;
		return (newNode);
	}
	while (aux->next != NULL)
	{
		if (number <= aux->next->n)
		{
			newNode->next = aux->next;
			aux->next = newNode;
			return (newNode);
		}
		aux = aux->next;
	}
	aux->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
