#include "main.h"

/**
 * create_file - Creates a new file and writes text to it
 * @filename: A pointer to a constant character
 * string representing the filename
 *
 * @text_content: A pointer to a character
 * string representing the text to be written
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Get length of the text_content string */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* Open file with read/write access and create it if it doesn't exist */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* Write the text_content to the file */
	w = write(fd, text_content, len);

	/* Check if file or write operation failed */
	if (fd == -1 || w == -1)
		return (-1);

	/* Close the file */
	close(fd);

	/* Return success */
	return (1);
}
