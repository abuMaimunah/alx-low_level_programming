#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
void print_error_and_exit(int code, const char *errorMessage)
{
	dprintf(STDERR_FILENO, "Error: %s\n", errorMessage);
	exit(code);
}
int main(int argc, char *argv[])
{
	const char *fileFrom;
	const char *fileTo;
	int fdFrom;
	int fdTo;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to");
	}
	fileFrom = argv[1];
	fileTo = argv[2];
	fdFrom = open(fileFrom, O_RDONLY);
	if (fdFrom == -1)
	{
		print_error_and_exit(98, "Can't read from file");
	}
	fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH);
	if (fdTo == -1)
	{
		print_error_and_exit(99, "Can't write to file");
	}

	while ((bytesRead = read(fdFrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			print_error_and_exit(99, "Can't write to file");
		}
	}
	if (bytesRead == -1)
	{
		print_error_and_exit(99, "Can't write to file");
	}
	if (close(fdFrom) == -1)
	{
		print_error_and_exit(100, "Can't close fd");
	}
	if (close(fdTo) == -1)
	{
		print_error_and_exit(100, "Can't close fd");
	}
	return (0);
}
