#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds node to the begin of list
 * @head: pointer
 * @str: pointer
 * node: the new node
 * x: length of node
 * Description: function that add a new node to the begging of list
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int x = 0;
	list_t *node;

	while (str[x])
		x++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = x;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
