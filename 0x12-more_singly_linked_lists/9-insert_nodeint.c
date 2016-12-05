#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	i = 1;
	temp = *head;
	newnode->n = n;
	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	if (index == 0)
	{
		*head = newnode;
		newnode->next = temp;
	}
	else if (temp->next != NULL)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp->next = newnode;
	}
	return (newnode);

}
