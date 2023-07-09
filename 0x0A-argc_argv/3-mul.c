#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument's count
 * @argv: char array
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
