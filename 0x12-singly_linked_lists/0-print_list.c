#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that print all element in list-t
 * @h: pointer
 * i: input
 * Description: function that prints all element in the list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
