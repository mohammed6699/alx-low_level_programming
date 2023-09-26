#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that free the list
 * @head: pointer
 * Description: function that frees the list
 * Return: nothoing
 */

void free_listint2(listint_t **head)
{
	listint_t *rmp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		rmp = *head;
		*head = (*head)->next;
		free(rmp);
	}
}
