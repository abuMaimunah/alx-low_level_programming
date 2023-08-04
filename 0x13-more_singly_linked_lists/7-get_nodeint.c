#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - Get a node at an index
 * @head: The starting node
 * @index: designed index
 * Return: the returned data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex;

	currentIndex = 0;
	while (head != NULL)
	{
		if (currentIndex == index)
		{
			return (head);
		}
		head = head->next;
		currentIndex++;
	}
	return (NULL);
}
