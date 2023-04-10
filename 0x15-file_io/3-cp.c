#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *_buffer(char *file);
void close_file(int fd);

/**
 * main - program copies the content of a file to another file
 * (cp file_from file_to)
 * @argc: number of arguments supplied
 * @argv: array of pointers to the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to; /* open system calls for 2 files) */
	int r; /* read system call */
	int w; /* write system call */
	char *b; /* holds the buffer size */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = _buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, b, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, (00664));

	while (r > 0)
	{
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(file_to, b, r);

		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(98);
		}
		else
		{
			r = read(file_from, b, 1024);
			file_to = open(argv[2], O_WRONLY | O_APPEND);
		}
	}
	free(b);
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * _buffer - allocates 1024 bytes to buffer
 * Description: function allocates memory to buffer
 * @file: file to allocate bytes to
 * Return: _buffer
 */

char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Entry point
 * Description: function closes a file descriptor
 * @fd: the file descriptor to close
 */

void close_file(int fd)
{

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
