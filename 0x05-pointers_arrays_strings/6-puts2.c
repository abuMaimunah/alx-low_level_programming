#include "main.h"
#include <stdio.h>
void puts2(char *str);
int main(void)
{
	char *str;
	
	str = "0123456789";
	puts2(str);
	return (0);
}


void puts2(char *str)
{
	int len;
	int count;
	char newArr[100];

	len = 0;
	count = 0;
	while (*str)
	{
		len++;
		str++;
	//	printf("%d", len);
	//	_putchar(len);
	}
	while (count < len)
	{
		if (str[count] % 2 == 0)
		{
			newArr[count] = str[count];
		}
		printf("%c\n", newArr[count]);
	}
}
