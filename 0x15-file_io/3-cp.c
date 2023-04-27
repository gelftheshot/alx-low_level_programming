#include "main.h"

/**
 *main - copies content of one file to other file
 *@argc: number of argument ofn the command line
 *@argv: arraay of strings of arguamets
 *
 * Return: zero
 */

int main(int argc, char **argv)
{
	int f1, f2, r, w, c1, c2;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	while ((r = read(f1, buffer, BUFSIZ)) > 0)
	{
		w = write(f2, buffer, r);
		if (f2 < 0 || w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(f2);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(f1);
	c2 = close(f2);
	if (c1 < 0 || c2 < 0)
	{
		if (c1 < 0)
			dprintf(2, "Error: Can't close fd %d\n", f1);
		if (c2 < 0)
			dprintf(2, "Error: Can't close fd %d\n", f2);
		exit(100);
	} return (0);
}
