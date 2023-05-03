#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: headd
 * Return: pointer
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_1;
	listint_t *node_2;

	if (head == NULL)
		return (NULL);

	node_1 = head;
	node_2 = head;
	while (node_1 && node_2 && node_2->next)
	{
		node_1 = node_1->next;
		node_2 = (node_2->next)->next;

		if (node_1 == node_2)
		{
			node_1 = head;
			break;
		}
	}
	if (node_1 == NULL || node_2 == NULL || node_2->next == NULL)
		return (NULL);
	while (node_1 != node_2)
	{
		node_1 = node_1->next;
		node_2 = node_2->next;
	}
	return (node_2);
}
