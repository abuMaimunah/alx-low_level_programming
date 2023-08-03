#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delete the head node
 * @head: pointer to the head
 * Return: its data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (data);
}
