#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *head)
{
    const dlistint_t *current_node = head;
    size_t node_count = 0;

    while (current_node != NULL)
    {
        printf("%d\n", current_node->n);
        current_node = current_node->next;
        node_count++;
    }

    return (node_count);
}
