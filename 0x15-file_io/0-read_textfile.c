#include "main.h"

/**
 * read_textfile - read a file and print on screen
 * @filename: is the file name
 * @letters: number of letters
 * Return: the number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	char *words;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	words = malloc(sizeof(char) * letters);
	if (words == NULL)
		return (0);

	j = read(i, words, letters);

	k = write(STDOUT_FILENO, words, j);

	if (j == -1 || k == -1 || k != j)
	{
		free(words);
		return (0);
	}

	free(words);

	close(i);

	return (k);
}
