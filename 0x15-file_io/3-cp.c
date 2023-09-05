#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Program copies the content of a file to another file.
 *
 * @argc: argument count (number of arguments).
 * @argv: argument vector (array of arguments).
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, nread, nwrite;
	char *buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	nread = read(file_from, buffer, BUFFER_SIZE);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || nread == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nwrite = write(file_to, buffer, nread);
		if (nwrite == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (-1);
			exit(99);
		}
		nread = read(file_from, buffer, BUFFER_SIZE);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (nread > 0);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_from);
		exit(100);
		return (-1);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_to);
		exit(100);
		return (-1);
	}
	return (0);
}
