#include <stdio.h>
/**
 * main - Entry point with command line parameters
 * @argc: parameter's count
 * @argv: parameters value - a char array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
