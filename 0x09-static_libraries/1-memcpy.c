char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (start);
}
