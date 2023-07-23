#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*operation)(int, int);
	int result;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation  = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return 0;

}
