#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print the list and number of node
 * @h: A pointer to the list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
