#include "main.h"
char *create_buff(char *file);
void close_f(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argv: The number of arguments supplied to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argv, char *argc[])
{
	int op1, op2, rd, wr;
	char *buff;

	if (argv != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	buff = create_buff(argc[2]);

	op1 = open(argc[1], O_RDONLY);
	op2 = open(argc[2], O_RDONLY | O_TRUNC,	0664);
	while ((rd = read(op1, buff, 1024)) > 0)
	{
		if (op2 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argc[1]);
			free(buff);
			exit(98);
		}
		wr = write(op2, buff, rd);
		if (op2 == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argc[2]);
			free(buff);
			exit(99);
		}

		op2 = open(argc[2], O_WRONLY | O_APPEND);
	}
	close_f(op1);
	close_f(op2);
	free(buff);
	return (0);
}

/**
 * close_f - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_f(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Allocates memory for the  buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

