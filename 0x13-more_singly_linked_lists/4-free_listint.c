#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that delete the nodes
 * @head: pointer
 * rmp: new pointer to the node
 */

void free_listint(listint_t *head)
{
	listint_t *rmp = head;

	while (rmp != NULL)
	{
		rmp = rmp->next;
		free(head);
		head = rmp;
	}
}
