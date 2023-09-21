#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that print all element in list-t
 * @: pointer
 * i: input
 * Description: function that prints all element in the list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	long unsigned int i;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}

	for (i = 0;h != NULL; i++)
	{
		printf("[%lu] %s\n", i, h -> str);
		h =  h-> next;
	}
	return (i);
}
