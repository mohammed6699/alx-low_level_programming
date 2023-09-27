#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: pointer
 * @index: index to the node
 * Description: function that deletes the node at spacific index
 * Return: o
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (0); /* The list is empty*/
	}

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
	{
		previous = current;
		current = current->next;
		index--;
		return (-1);
	}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (0);
	}
}
