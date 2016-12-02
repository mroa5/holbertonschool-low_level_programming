#include "lists.h"

/**
 * add_nodeint_end - adds node to end of linked list
 * @head: start of linked list
 * @n: int data element of node
 * Return: endnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *temp;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endnode;
	}
	else
	{
		*head = endnode;
	}
	return (endnode);
}
