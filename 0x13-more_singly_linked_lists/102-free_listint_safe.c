#include "lists.h"
/**
 * m - allocate memorry for an array
 * of pointers to nodes in linked list
 * @l: old list
 * @size: size of new list
 * @newnd: new node to add
 * Return: pointer to the new list
 */
const listint_t **m(const listint_t **l, size_t size, const listint_t *newnd)
{
	const listint_t **new_list;
	size_t i = 0;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = l[i];
	new_list[i] = newnd;
	free(l);
	return (new_list);
}
/**
 * free_listint_safe - free list
 * @h: head
 * Return: number of node in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, n = 0;
	const listint_t **l = NULL;
	listint_t *next_node;

	if (h == NULL || *h == NULL)
		return (n);
	while (*h != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (*h == l[i])
			{
				*h = NULL;
				free(l);
				return (n);
			}
		}
		n++;
		l = m(l, n, *h);
		next_node = (*h)->next;
		free(*h);
		*h = next_node;
	}
	free(l);
	return (n);

}
