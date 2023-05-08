#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to be read
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buffer;

	buffer = malloc(sizeof(char *) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (r);
}
