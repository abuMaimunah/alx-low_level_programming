char *_strcat(char *dest, char *src)
{
	char *destStart = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (destStart);
}
