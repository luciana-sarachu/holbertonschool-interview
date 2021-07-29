#include "lists.h"

/**
 * insert_node - insert a number into a sorted singly linked list.
 *@head: head of the node
 *@number: new node number
 * Return: Always 0.
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *node, *aux = *head;
int i;

if (!node)
{
return (NULL);
}
node->n = number;
if (number == 0)
{
node->next = *head;
*head = node;
}
else
{
for (i = 0; i < number - 1; i++)
{
if (!aux || !aux->next)
{
return (NULL);
}
aux = aux->next;
}
node->next = aux->next;
aux->next = node;
}
return (node);
}

