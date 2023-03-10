int	ft_is_uppercase(char c)
{
		if ( c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}

int	ft_is_lowercase(char c)
{
		if ( c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}

int	ft_is_number(char c)
{
		if ( c >= '0' && c <= '9')
			return (1);
		else
			return (0);
}

int	ft_is_alpha(char c)
{
		if ( ft_is_uppercase(c)  || ft_is_lowercase(c))
			return (1);
		else
			return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	if (ft_is_lowercase(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_is_lowercase(str[i]) && !ft_is_alpha(str[i - 1])
				&& !ft_is_number(str[i - 1]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strcapitalize(argv[1]));
}
*/
