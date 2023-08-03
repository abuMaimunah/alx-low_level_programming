#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - A function that a node
 * @head: The head of the list
 * @n: The node
 * Return: the resulting list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (newNode);
}
