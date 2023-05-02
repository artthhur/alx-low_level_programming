#include "lists.h"
/**
 * mem - allocate memorry for an array
 * of pointers to nodes in linked list
 * @l: old list
 * @size: size of new list
 * @newnd: new node to add
 * Return: pointer to the new list
 */
const listint_t **mem(const listint_t **l, size_t size, const listint_t *newnd)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = l[i];
	new_list[i] = new_node;
	free(l);
	return (new_list);
}
/**
 * print_listint_safe - print list
 * @head: head
 * Return: number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, number_list = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < number_list; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (number_list);
			}
		}
		number_list++;
		l = mem(l, number_list, head);
		printf("[%p] %d\n", (void *)head, head->number_list);
		head = head->next;
	}
	free(l);
	return (number_list);
}
