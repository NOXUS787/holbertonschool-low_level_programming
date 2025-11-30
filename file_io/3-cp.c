#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * file_error - prints an error message for file read/write and exits
 * @code: exit code (98 for read, 99 for write)
 * @file: file name
 * @is_read: 1 if read error, 0 if write error
 */
void file_error(int code, const char *file, int is_read)
{
	if (is_read)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	else
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(code);
}

/**
 * close_error - prints an error message for close error and exits
 * @fd: file descriptor that failed to close
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * copy_file - copies the contents from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @from: source file name (for error messages)
 * @to: destination file name (for error messages)
 */
void copy_file(int fd_from, int fd_to, const char *from, const char *to)
{
	ssize_t r_bytes, w_bytes;
	char buffer[BUF_SIZE];

	while ((r_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
			file_error(99, to, 0);
	}

	if (r_bytes == -1)
		file_error(98, from, 1);
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, exits with codes on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		file_error(98, av[1], 1);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		file_error(99, av[2], 0);
	}

	copy_file(fd_from, fd_to, av[1], av[2]);

	if (close(fd_from) == -1)
	{
		close(fd_to);
		close_error(fd_from);
	}

	if (close(fd_to) == -1)
		close_error(fd_to);

	return (0);
}
