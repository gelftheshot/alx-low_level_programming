#include "main.h"
/**
 * create_file - creats a file and fill with text
 * @filename: name of thefile
 * @text_content: text to be writen
 * Return: 1 if successfull, - 1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (i < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(i, text_content, k);
		if (j != k)
			return (-1);

	}

	close(i);

	return (1);

}
