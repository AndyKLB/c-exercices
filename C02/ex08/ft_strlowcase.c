char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strlowcase(argv[1]));
}
*/
