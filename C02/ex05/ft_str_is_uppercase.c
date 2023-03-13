int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
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
			ft_str_is_uppercase("")?"TRUE":"FALSE",
			ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ")?"TRUE":"FALSE",
			!ft_str_is_uppercase("absdefghijklmnopqrstuvwxyz")?"TRUE":"FALSE",
			!ft_str_is_uppercase("0123456789")?"TRUE":"FALSE",
			!ft_str_is_uppercase(" ")?"TRUE":"FALSE",
			!ft_str_is_uppercase("\\")?"TRUE":"FALSE",
			!ft_str_is_uppercase("\n")?"TRUE":"FALSE");
}
*/
