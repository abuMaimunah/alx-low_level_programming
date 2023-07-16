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
	mpz_t num1, num2, result;

	mpz_init(num1);
	mpz_init(num2);
	mpz_init(result);

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
	mpz_set_str(num1, argv[1], 10);
	mpz_set_str(num2, argv[2], 10);
	mpz_mul(result, num1, num2);
	gmp_printf("%Zd\n", result);
	mpz_clear(num1);
	mpz_clear(num2);
	mpz_clear(result);
	return (0);
}
