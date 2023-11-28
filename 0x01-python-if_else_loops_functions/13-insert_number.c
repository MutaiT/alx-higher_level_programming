#include "lists.h"

/**
 * insert_node - Inserts a node in a sorted list
 * @head: Address of the first node
 * @number: The element to add
 *
 * Return: the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *prev, *nxt;

	if (!head)
		return (NULL);
	prev = *head;
	nxt = (*head)->nxt;
	new = malloc(sizeof(listint_t)); /* memory allocation */
	if (!new)
		return (NULL);
	new->n = number;
	if (*head == NULL) /* if empty list */
	{
		new->nxt = NULL;
		*head = new;
		return (new);
	}
	if (number < (*head)->n) /* if number is less than head */
	{
		new->nxt = *head;
		*head = new;
		return (new);
	}
	/* add node elsewhere */
	while (prev->nxt)
	{
		prev = prev->nxt;
		nxt = nxt->nxt;
		if (nxt)
			if (nxt->n > number)
				break;
	}
	prev->nxt = new;
	new->nxt = nxt;
	return (new);
}
