#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Create a file
 * @filename: Name of the file
 * @text_content: pointer to the content
 * Return: suceess
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_to_be_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		perror("Error opening or creating file");
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_to_be_written = write(fd, text_content, strlen(text_content));
		if (bytes_to_be_written == -1)
		{
			perror("Error writing to file");
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
