char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strcpy(argv[1], argv[2]));
}*/
