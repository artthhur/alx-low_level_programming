#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	register int ndn = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		ndn++;
	}
	return (ndn);
}
