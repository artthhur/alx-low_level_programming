#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to head
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *after;
	listint_t *before = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}
