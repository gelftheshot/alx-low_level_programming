#include "main.h"
/**
 *create_file - a fucntion that creat file and write
 *@filename: is the file name to be created
 *@text_content: is the content to be written on file
 *Return: 1 on succses and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t op, wr;
	int j = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	while (text_content[j])
	{
		j++;
	}

	if (text_content != NULL)
	{
		wr = write(op, text_content, j);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
