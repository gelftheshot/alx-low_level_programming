#include "main.h"
/**
 *read_textfile - read a text from fiela and print it
 *@letters: is the number of letter to be printed
 *@filename: is the file name
 *Return: the number of letter printed
 *	or 0 for failer case
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;

	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buff);
		return (0);
	}

	re = read(op, buff, letters);
	if (re == -1)
	{
		free(buff);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, re);

	if (wr == -1 || re != wr)
	{
		free(buff);
		return (0);
	}
	
	free(buff);
	close (op);
	return (wr);
}
