#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area pointed to by s
 * @b: constant value 
 * @n: number of byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        char *p = s;

        while (n-- > 0)
        {
              *p++  =  b;
        }

        return (s);
}
