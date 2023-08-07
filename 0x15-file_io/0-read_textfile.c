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
	int op, re, wr;

	char *buff;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDWR);
	if (op == -1)
		return (0);
	buff = malloc(letters);

	re = read(op, buff, letters);
	wr = write(1, buff, re);

	if (re == -1 || wr == -1 || re != wr)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (wr);
}
