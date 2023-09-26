#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function the deletes the head node data
 * @head: pointer
 * tmp: input
 * Descrition: function that deletes the first node data
 * Return: the node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *rmp;

	if (*head == NULL)
	{
		return (0);
	}
		rmp = *head;
		*head = (*head)->next;
	return (rmp->n);
}
