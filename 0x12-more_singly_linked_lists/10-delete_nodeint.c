#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index @index of @head
 * @head: pointer to a pointer to a linked list
 * @index: location to delete element
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *keep;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	i = 0;
	while (i < index)
	{
		i++;
		keep = temp;
		if (temp->next != NULL)
			temp = temp->next;
		else
			return (-1);
	}
	if (index == 0)
		*head = temp->next;
	else if (temp->next != NULL)
		keep->next = temp->next;
	else
		keep->next = NULL;
	free(temp);
	return (1);
}
