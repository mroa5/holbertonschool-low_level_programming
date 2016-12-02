#include "lists.h"
/**
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addhead;

	addhead = malloc(sizeof(listint_t));
	if (addhead == NULL)
		return (NULL);
	addhead->n = n;
	addhead->next = *head;
	*head = addhead;
	return (addhead);
}
