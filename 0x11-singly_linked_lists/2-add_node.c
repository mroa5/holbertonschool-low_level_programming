#include "lists.h"
/**
 * add_node -  a function that adds a new node to
 * beginning of list_t list.
 * @head: pointer-to-pointer start of list.
 * @str: string to add to node.
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
