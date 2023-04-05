#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * _find_sqrt - finds the natural square root
 * @n: the number to find the square root of
 * Return: the natural square root fo n, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_find_sqrt(n, 1));
}
/**
 * _find_sqrt - finds tha natural square root
 * @n: the number to fine the square root of
 * @i: the integer to increment and check
 * Return: the natural square root of n, or -1 if n doesnt have one
 */
int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_find_sqrt(n, i + 1));
}
