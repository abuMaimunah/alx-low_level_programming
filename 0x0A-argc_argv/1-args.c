#include <stdio.h>
/**
 * main - Entry point
 * @argc: parameter's count
 * @argv: parameter's value
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
