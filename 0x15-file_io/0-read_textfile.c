#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file, *output_stream;
	char *buffer;
	size_t byte_read, byte_written;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	byte_read = fread(buffer, 1, letters, file);
	if (byte_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[byte_read] = '\0';
	output_stream = (file == stdout) ? stdout : stderr;
	byte_written = fwrite(buffer, 1, byte_read, output_stream);
	if (byte_written != byte_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (byte_written);
}