#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		return;
	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
	head = NULL;
}
