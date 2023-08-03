#include "lists.h"
#include <stdddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delete the head node
 * @head: pointer to the head
 * Return: its data
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	int data = (*head)->n;
	listint_t *current = *head;
	*head = (*head)->next;
	free(current);
	return (data);
}
