#include "lists.h"
/**
 * string_length - returns the lenght of string
 * @str: given tring
 * Return: length of string
 */
unsigned int string_length(char *str)
{
	unsigned int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * add_node_end - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 * Return: adress of new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newndn;
	char *newstrg;
	list_t *last = *head;

	if (str == NULL)
		return (NULL);
	newndn = malloc(sizeof(list_t));
	if (!newndn)
		return (NULL);
	newstrg = strdup(str);
	if (!newstrg)
	{
		free(newndn);
		return (NULL);
	}
	newndn->len = string_length(newstrg);
	newndn->str = newstrg;
	newndn->next = NULL;
	if (!*head)
	{
		*head = newndn;
		return (newndn);
	}
	while (last->next)
		last = last->next;
	last->next = newndn;
	return (last);
}
