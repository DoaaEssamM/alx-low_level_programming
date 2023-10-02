#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int cf);

/**
 * create_buffer - Allocate 1024 bytes for a buffer
 * @file: The name of the file buffer storing chars
 *
 * Return: A pointer to the new buffer
*/

char *create_buffer(char *file)
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

/**
 * close_file - Close file descriptors
 * @cf: file descriptor
 */
void close_file(int cf)
{
	int c;

	c = close(cf);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close cf %d\n", cf);
		exit(100);
	}
}

/**
 * main - Copy the contents of a file to another file
 * @argc: num. of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 (success).
 *
 * Description: exit code 97 -> If the argument count is not correct
 * exit code 98 -> If file_from doesn't exist or cann't read
 * exit code 99 -> If file_to cann't be created or written
 * exit code 100 ->If file_to or file_from cannot be closed
*/

int main(int argc, char *argv[])
{
	int from, op, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(op, buff, r);
		if (op == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buffer, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(op);

	return (0);
}
