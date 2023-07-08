#include <stdio.h>
/**
 * main - Entry point
 * @argc: command line argument's count
 * @argv: command line argument's value
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
