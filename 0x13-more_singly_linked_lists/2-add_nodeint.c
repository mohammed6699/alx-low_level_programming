#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - function to add a elemnet to the begin of a list
 * @head: pointer
 * @n: int
 * i: input
 * Description: function that add an element to a list
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (*head);
}

