#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
/**
 * append_text_to_file - Append to a file
 * @filename: File name
 * @text_content: file content
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t b_written;

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
	b_written = fwrite(text_content, sizeof(char), strlen(text_content), file);
	if (b_written != strlen(text_content))
	{
		perror("Error writing to file");
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (-1);
}
