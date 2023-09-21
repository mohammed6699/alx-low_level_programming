#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that prints length of list
 * @h: pointer to a struct
 * count: input
 * Descrition: function that returns the length os list
 * return: length
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
