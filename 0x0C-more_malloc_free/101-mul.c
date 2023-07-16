#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
/**
 * main - Entry point
 * @argc: argument's count
 * @argv: argument's value
 * Return: 0 success;
 */
int main(int argc, char *argv[])
{
	int i, j;
	long int num1, num2, result;

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
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%ld\n", result);
	return (0);
}
