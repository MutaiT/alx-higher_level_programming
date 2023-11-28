#include "lists.h"

/**
 * check_cycle - A program that checks if the linked list has a loop
 * 
 * @list: The head of the linked list
 *
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *asc, *last = list;

	while (last)
	{
		if (last == last->next)
			return (1);

		for (asc = list; asc != last; asc = asc->next)
			if (asc == last->next)
				return (1);
		last = last->next;
	}
	return (0);
}
