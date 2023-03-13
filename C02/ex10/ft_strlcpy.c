int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (i + 1 < size)
	{
		while (j > i + 1)
		{
			src[j] = dest[j];
			j++;
		}
	}
	else if (size > 0)
	{
		while (j < i - 1)
		{
			src[j] = dest[j];
			j++;
		}
		dest[j] = 0;
	}
	return (i);
}
