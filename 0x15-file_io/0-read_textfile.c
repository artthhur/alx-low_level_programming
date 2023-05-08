#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters
 * Return: nmbr of char  or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filep;
	char *buffer;
	ssize_t  lenr = 0, lenw = 0;

	if (filename == NULL)
		return (0);
	filep = open(filename, O_RDONLY);
	if (filep == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filep);
		return (0);
	}
	lenr = read(filep, buffer, letters);
	close(ptfile);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenw != lenr)
		return (0);
	return (lenw);
}
