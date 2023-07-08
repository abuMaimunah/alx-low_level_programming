char *_strncat(char *dest, char *src, int n)
{
	char *destStart = dest;
	int i;

	while (*dest)
	{
		dest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (destStart);
}
