int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s",
			ft_str_is_lowercase("")?"TRUE":"FALSE",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"TRUE":"FALSE",
			!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ")?"TRUE":"FALSE",
			!ft_str_is_lowercase("0123456789")?"TRUE":"FALSE",
			!ft_str_is_lowercase(" ")?"TRUE":"FALSE",
			!ft_str_is_lowercase("\n")?"TRUE":"FALSE",
			!ft_str_is_lowercase("\\")?"TRUE":"FALSE");
}*/
