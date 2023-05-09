#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - Entry
  * @argc: The number of arguments passed
  * @argv: array of pointers to the arguments
  * Return: return 0 on success
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies the content of a file to another file
  * @dest...
  * @src...
  *
  * Return: Void
  */
void copy_file(const char *src, const char *dest)
{
	int fd, nw, r;
	char buffer[1024];

	fd = open(src, O_RDONLY);
	if (!src || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	nw = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd, buffer, 1024)) > 0)
	{
		if (write(nw, buff, r) != r || nw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(nw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", nw);
		exit(100);
	}
}
