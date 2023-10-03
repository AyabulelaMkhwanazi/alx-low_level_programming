#include "main.h"

/**
 * read_textfile - function reads a textfile and prints it to the POSIX
 * standard output.
 *
 * @filename: the name of the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 * if filename is NULL return 0, if file can not be opened or read return 0
 * if write fails or does not write the expected amount of bytes, return 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, bytes_written;
	ssize_t fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc_checked(sizeof(char) * letters);
	nread = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, nread);

	free(buffer);
	close(fd);
	return (bytes_written);
}

/**
 * malloc_checked - function allocates nemory using malloc.
 *
 * @size: the size to allocate.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
