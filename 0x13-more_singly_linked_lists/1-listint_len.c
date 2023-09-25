#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that return number of element in the list
 * @h: pointer to the list
 * len: length of the list
 * Description: function that returns number of element in the list
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
