#include "lists.h"

/**
 * sum_listint - sum of all the data in listint_t
 * @head: start of linked list
 * Return: sum of all data in list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
