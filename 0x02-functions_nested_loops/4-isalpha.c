#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: The character parameter
 * Return: 1 is returned for alphabet and 0 non alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
