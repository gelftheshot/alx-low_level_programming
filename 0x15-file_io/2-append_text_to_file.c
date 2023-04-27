#include "main.h"

/**
 *append_text_to_file - appends some text to a file
 *@filename: is the name of the file
 *@text_content: the text to be writen
 *
 * Return: 1 if successful -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(i, text_content, k);

		if (k != j)
			return (-1);
	}

	close(i);

	return (1);
}
