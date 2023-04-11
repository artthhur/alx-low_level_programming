#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: pointer to the array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NUll);
	for (i = 0; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
