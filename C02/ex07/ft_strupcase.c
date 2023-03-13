char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str [i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);

}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strupcase(argv[1]));
}
*/
