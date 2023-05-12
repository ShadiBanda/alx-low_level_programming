#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 1024

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd, fd_r, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = fopen(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_r = fopen(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = fread(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_r < 0 || fwrite(fd_r, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			fclose(fd);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = fclose(fd);
	n = fclose(fd_r);
	if (m == -1 || n == -1)
	{
		if (m == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (n == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}
