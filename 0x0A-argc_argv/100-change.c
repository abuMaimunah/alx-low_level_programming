#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: parameter's count
 * @argv: parameter value - char array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int cent;
	int num_coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		num_coin += cent / coins[i];
		cent %= coins[i];
	}
	printf("%d\n", num_coin);
	return (0);
}
