#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * fizz_buzz - FizzBuzz function
 * Return: 0 success
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
