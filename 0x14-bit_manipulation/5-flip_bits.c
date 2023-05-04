#include "main.h"
/**
 * flip_bits -  returns nb of bits to flip to get from one
 * number ro another
 * @n: first number
 * @m: second number
 * Return: nb of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f_lip = 0;
	unsigned long int p_ower = n ^ m;

	while (p_ower)
	{
		if (1 & p)
			f_lip++;
		p_ower = p_ower >> 1;
	}
	return (f_lip);
}
