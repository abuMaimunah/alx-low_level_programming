/**
 * _islower - return 1 if lower and 0 otherwise
 * Return: 0 successful
 */
int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
