int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
