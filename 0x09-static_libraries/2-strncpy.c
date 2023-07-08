char *_strncpy(char *dest, char *src, int n)
{
	char *destStart = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (destStart);
}
