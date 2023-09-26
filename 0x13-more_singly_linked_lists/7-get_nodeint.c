#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - functon to get the nth node for an index
 * @head: pointer
 * @index: int
 * count: input
 * rmp: pointer to head
 * Description: function that print the nth value for an index
 * Return: 0 (success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *rmp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (rmp != NULL)
	{
		if (count == index)
		{
			return (rmp);
		}
		count++;
		rmp = rmp->next;
	}
	return (0);
}
