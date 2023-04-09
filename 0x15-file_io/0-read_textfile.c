#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file
 * @letters: number of letters to read
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r, n;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open("filename.txt", O_RDONLY);
	if (fd != -1)
	{
		buffer = malloc(sizeof(char) * letters);
		r = read(fd, buffer, letters);
		n = write(STDOUT_FILENO, buffer, r);
	}
	else 
		return (0);
	free(buffer);
	close(fd);
	return (n);
}
