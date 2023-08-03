#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end -  a function that a node
 * @head: a double pointer to the head
 * @str: The data of the node
 * Return: the list is returned
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
	return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
	return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
	free(newNode);
	return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
