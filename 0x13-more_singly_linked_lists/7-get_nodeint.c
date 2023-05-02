#include "lists.h"
/**
 * get_nodeint_at_index - retyrn the nth node
 * @head: head
 * @index: index of the node
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node;

	current_node = head;
	while (current_node)
	{
		if (i == index)
			return (current_node);
		i++;
		current_node = current_node->next;
	}
	return (current_node);
}
