/**
 * _islower - return 1 if lower and 0 otherwise
 * @c: The character in ASCII code
 * Return: 0 successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
