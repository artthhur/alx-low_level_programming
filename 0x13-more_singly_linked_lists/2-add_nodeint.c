#include "lists.h"
/**
 * add_nodeint - adds a new node at the begining of list
 * @head: head
 * @n: n
 * Return: address of new elmt , NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
