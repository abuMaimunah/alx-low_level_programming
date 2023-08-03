#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - free a list
 * @head: A double pointer to the head
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}

