#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: argument count
 * @argv: argument's value
 * Return: success
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t b_read, b_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Erroe: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}
	while ((b_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		b_written = write(fd_to, buffer, b_read);
		if (b_written != b_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error reading file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd_from);
		close(fd_to);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}
