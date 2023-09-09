#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stddef.h>
/**
 * read_textfile - A function that reads a text file
 * @filename: THe name of the file
 * @letters: letters to be printed
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t readByte;
	ssize_t writeByte;
	FILE *file;

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
	readByte = fread(buffer, sizeof(char), letters, file);
	if (readByte <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[readByte] = '\0';
	writeByte = write(STDOUT_FILENO, buffer, readByte);
	if (writeByte != readByte)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (writeByte);
}
