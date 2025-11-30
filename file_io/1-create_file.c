#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_bytes, length = 0;

	if (filename == NULL)
		return (-1);

	/* Open file: O_CREAT (if missing), O_WRONLY, O_TRUNC (reset file) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL → create empty file */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		w_bytes = write(fd, text_content, length);
		if (w_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
