int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 123 || (str[i] > 90 && str[i] < 97))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n", 
			ft_str_is_alpha("")?"TRUE":"FALSE",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")?"TRUE":"FALSE",
			!ft_str_is_alpha("1")?"TRUE":"FALSE",
			!ft_str_is_alpha(" ")?"TRUE":"FALSE",
			!ft_str_is_alpha("\\")?"TRUE":"FALSE",
			!ft_str_is_alpha("\n")?"TRUE":"FALSE");
}
*/
