#include "lists.h"
/**
 * sum_listint - sum of all data
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int fsum = 0;

	while (head != NULL)
	{
		fsum += head->n;
		head = head->next;
	}
	return (fsum);
}
