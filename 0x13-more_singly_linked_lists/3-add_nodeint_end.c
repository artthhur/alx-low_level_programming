#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: head
 * @n: n
 * Return: address of new elmt, NULL  if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
