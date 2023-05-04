#include "main.h"
/**
 * poww - return a power b
 * @a: base
 * @b: exponent
 * Return: result
 */
int poww(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * poww(a, b - 1));
}
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: number
 * @index: index
 * Return: 1 for success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int v_alue;

	if (index > 64)
		return (-1);
	v_alue = poww(2, index);
	*n = (*n & v_alue) ? *n ^ v_alue : *n;
	return (1);
}
