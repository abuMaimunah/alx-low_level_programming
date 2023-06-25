#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * fizz_buzz - a function that prints either fizz, buzz or fizzbuzz
 * Return: 0 success
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - function fizzbuzz
 */
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
			if (i == 100)
			{
				printf("%s", "Buzz\n");
				return;
			}
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
