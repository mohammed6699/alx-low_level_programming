#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - functon that free a list
 * @head: pointer to the list
 * rmp: pointer
 * Description: function that free a list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *rmp;

	while (rmp != NULL)
	{
		rmp = rmp->next;
		free(head);
		head = rmp;
	}
}
