#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that print all elements of the list
 * @h: pointer to the list
 * i: input
 * Description: function that prints all the elements of the list
 * Return: nu of elements
 */

size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
