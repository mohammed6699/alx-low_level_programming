#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function tha add a node at spacific index
 * @head: pointer
 * @idx: index
 * @n: int
 * tmp: new node
 * Description: add a spacific node at spacific index
 * Return: tmp
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *rmp = *head;
	listint_t *tmp = malloc(sizeof (listint_t));
	tmp->n = n;
	tmp->next = (*head);

	if (head == NULL)
	{
		return (NULL);
	}
	
	if (idx == 0)
	{
	tmp->next = *head;
	*head = tmp;
	return (tmp);
	}

	while (tmp != NULL)
	{
		rmp->next = rmp;
	}
	if (rmp == NULL)
	{
		return (NULL);
	}
	tmp->next = rmp->next;
	rmp->next = tmp;
	return (tmp);
}
