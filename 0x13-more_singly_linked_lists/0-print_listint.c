#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number_node++;
		h = h->next;
	}
	return (number_node);
}

