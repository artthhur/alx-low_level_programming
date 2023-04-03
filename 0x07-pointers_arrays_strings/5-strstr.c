#include "main.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: pointer to string to search in
 * @needle: pointer to substring to search for
 *
 * Return: pointer to beginning of located substring, or Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
