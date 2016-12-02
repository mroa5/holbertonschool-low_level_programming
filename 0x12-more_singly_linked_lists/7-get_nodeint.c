#include "lists.h"

/**
 * get_nodeint_at_index - returns nth nod of listint_t
 * @head: start of linked list
 * @index: node starting at 0
 * Return:  index || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
