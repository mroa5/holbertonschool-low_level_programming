#include "lists.h"

/**
 * get_nodeint_at_index - returns nth nod of listint_t
 * @head: start of linked list
 * @index: node starting at 0
 * Return:  index || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	target = head;
	if (target->next)
	{
		i = 0;
		while (i < index)
		{
			target = target->next;
			i++;
		}
		return (target);
	}
	return (NULL);
}
