#include "main.h"
/**
 *append_text_to_file - a fucntion that creat file and write
 *@filename: is the file name to be created
 *@text_content: is the content to be written on file
 *Return: 1 on succses and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, wr;
	int j;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1){
		close(op)
		return (-1);
	}
	if (text_content != NULL)
	{
		for (j = 0; text_content[j]; j++)
			;
	}

	wr = write(op, text_content, j);
	if (wr == -1){
		close(op)
		return (-1);
	}
	close(op);
	return (1);
}
