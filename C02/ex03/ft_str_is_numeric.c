int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s",
		 ft_str_is_numeric("")?"TRUE":"FALSE",
		 ft_str_is_numeric("0123456789")?"TRUE":"FALSE",
		 !ft_str_is_numeric(" ")?"TRUE":"FALSE",
		 !ft_str_is_numeric("\\")?"TRUE":"FALSE",
		 !ft_str_is_numeric("\n")?"TRUE":"FALSE",
		 !ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXYZabcderghijklmnopqrstuvwxyz")?"TRUE":"FALSE");
}
*/
