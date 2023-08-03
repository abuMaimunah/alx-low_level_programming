#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - free the list
 * @head: a pointer to the head of the node
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *current = head;

		head = head->next;
		free(current);
	}
}
