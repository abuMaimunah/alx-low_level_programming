#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
/**
 * append_text_to_file - Append to a file
 * @filename: File name
 * @text_content: file content
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t b_written, length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		if (errno == EACCES)
		{
			perror("permission denied");
		}
		else
		{
			perror("Error opening file");
		}
		return (-1);
	}
	if (access(filename, R_OK) != 0)
	{
		perror("No read permissions");
		fclose(file);
		return (-1);
	}
	length = strlen(text_content);
	b_written = fwrite(text_content, sizeof(char), length, file);
	if (b_written != length)
	{
		perror("Error writing to file");
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (-1);
}
