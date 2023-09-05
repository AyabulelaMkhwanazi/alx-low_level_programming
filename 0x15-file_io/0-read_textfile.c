#include "main.h"

/**
 * read_textfile - function reads a textfile and prints it to the
 * POSIX standard output.
 *
 * @filename: pointer to the file
 * @letters: the number of letters it should read and print.
 *
 * Return: 0 if filename is NULL.
 * 0 if write fails or does not write expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread;
	ssize_t nwrite;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		return (0);
	}

	nwrite = write(STDOUT_FILENO, buf, nread);
	if (nwrite == -1 || nwrite != nread)
	{
		return (0);
	}
	close(fd);
	free(buf);

	return (nwrite);
}
