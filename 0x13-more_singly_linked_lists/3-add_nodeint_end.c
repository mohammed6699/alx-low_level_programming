#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - function that add a node to the end of a list
 * @head: pointer
 * @n: data of node
 * node: pointer
 * rmp: the added node
 * Description: function that adds node to the end of a list
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *rmp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (rmp->next != NULL)
	{
		rmp = rmp->next;
	}
	rmp->next = node;
	return (node);
}
