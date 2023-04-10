#include "main.h"
#include <stdio.h>

/**
 * main - pritns all the arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
