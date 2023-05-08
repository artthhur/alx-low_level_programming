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
 * create_file - create file and write content
 * @filename: name of file
 * @text_content: write content
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int filep;
	ssize_t charwrite = 0;

	if (filename == NULL)
		return (-1);
	filep = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filep == -1)
		return (-1);
	if (text_content != NULL)
		charwrite = write(filep, text_content, _strlen(text_content));
	close(filep);
	if (charwrite == -1)
		return (-1);
	return (1);
}
