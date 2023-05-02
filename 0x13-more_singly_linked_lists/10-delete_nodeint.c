#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head: pointer to the head
 * @index: index
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_ext;
	listint_t *c_urrent;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		n_ext = (*head)->next;
		free(*head);
		*head = n_ext;
		return (1);
	}
	c_urrent = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (c_urrent->next == NULL)
			return (-1);
		c_urrent = c_urrent->next;
	}
	n_ext = c_urrent->next;
	c_urrent->next = n_ext->next;
	free(n_ext);
	return (1);
}
