#include "lists.h"

/**
 * pop_listint - deletes  head node of listint_t
 * and returns the head node's data (n).
 * @head: start of the linked list
 * Return: the data contents of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (head == NULL)
		return (0);

	pop = *head;
	if (pop != NULL)
	{
		*head = pop->next;
		i = pop->n;
		free(pop);
		return (i);
	}
	return (0);
}
