#include "lists.h"
/**
 * print_listint - prints all elements in listint_t
 * @h: pointer
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	if (h)
	{
		while (h->next)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
