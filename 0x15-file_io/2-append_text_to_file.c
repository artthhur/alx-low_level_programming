#include "main.h"
/**
 * _strlen - length of stringg
 * @s: string
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filep;
	ssize_t ln;

	filep = open(filename, O_WRONLY | O_APPEND);
	if (filep == -1)
		return (-1);
	if (text_content != NULL)
		ln = write(filep, text_content, _strlen(text_content));
	close(filep);
	if (ln == -1)
		return (-1);
	return (1);
}
