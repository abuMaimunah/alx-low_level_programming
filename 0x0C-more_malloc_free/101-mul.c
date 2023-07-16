#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument's count
 * @argv: argument's value
 * Return: 0 success;
 */
int main(int argc, char *argv[])
{
	int i, j;
	int64_t num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0') &&
					!(argv[i][j] <= '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = strtoll(argv[1], NULL, 10);
	num2 = strtoll(argv[2], NULL, 10);
	printf("%ld\n", num1 * num2);
	return (0);
}
