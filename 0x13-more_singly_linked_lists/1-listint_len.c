#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * listint_len - list the elements in a linked list
  * @h: The pointer to the list
  * Return: The number of nodes is returned
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
