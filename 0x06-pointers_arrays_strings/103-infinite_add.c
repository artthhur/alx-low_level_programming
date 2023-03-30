#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum;

	i = j = k = carry = sum = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	r[size_r - 1] = '\0';
	for (i--, j--, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0); i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[k] = sum + '0';
	}
	if (carry == 1 && k >= 0)
	{
		r[k] = '1';
		return (r + k);
	}
	else if (k >= 0)
		return (r + k + 1);
	else
		return (0);
}
