#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that add node at the end of list
 * @head: pointer to the first element of the list
 * @str: pointer
 * x: length
 * node: node
 * rmp: the added node
 * Description: function that add a node to the end of the list
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int x = 0;
	list_t *node;
	list_t *rmp = *head;

	while (str[x])
		x++;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = x;
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
